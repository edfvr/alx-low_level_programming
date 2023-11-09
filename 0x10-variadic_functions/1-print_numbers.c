#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator : the string to be ed between number
* @prits nn :  the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(x);
	printf("\n");
}

