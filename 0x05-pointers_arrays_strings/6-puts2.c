#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str : pointer to str
 */
void puts2(char *str)
{
	int i, x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
