#include "main.h"
/**
 * _islower - 1 if lowercase and 0 if not
 * @c : Alphabet case
 * Return: 1 for lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
