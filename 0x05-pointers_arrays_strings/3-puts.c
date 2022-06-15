#include "main.h"

/**
 * puts - prints a string, followed by a new line, to stdout.
 * @str: 
 */
void _puts(char *str) 
{
	for (; *str != '0/'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n')
}
