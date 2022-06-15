#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
int _strlen(char *s)
{
	int x;

	for (; *s != '\0; s++)
	{
		x = x + 1;
	}
	return (strlen(x));
}
