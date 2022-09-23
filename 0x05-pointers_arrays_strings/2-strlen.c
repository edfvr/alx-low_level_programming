#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
int _strlen(char *s)
{
		int stringLenth = 0;

		while (*s++)
		{
			stringLenth++;
		}
		return (stringLenth);
}
