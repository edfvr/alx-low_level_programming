#include "main.h"

/**
 * puts - prints a string, followed by a new line, to stdout.
 * @str : pointer to str
 */
void _puts(char *str)
{
		int i;

		for (i = 0; str[i] != '\0'; i++)
		{
				_putchar(str[i]);
		}
		_putchar('\n');
}