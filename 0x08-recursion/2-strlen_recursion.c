#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : the string
 * Return: string's length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = n + _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
