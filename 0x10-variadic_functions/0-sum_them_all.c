#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - returns the sum of all its parameters.
 * @n : no. of arguments
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(x, int);
	}

	va_end(x);
	return (sum);
}
