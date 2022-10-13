#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator : the string to be printed between the strings
 * @n : the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *s;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char *);

		if(s == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(x);
	printf("\n");
}
