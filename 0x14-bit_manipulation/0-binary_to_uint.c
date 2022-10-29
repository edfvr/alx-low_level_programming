#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
unsigned int _strlen(char const *s)
{
	int stringLenth = 0;

	while (*s++)
	{
		stringLenth++;
	}
	return (stringLenth);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : base
 * @y : power of x
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_unit -  converts a binary number to an unsigned int.
 * @b : 
 * Return: he converted number, or 0 if
		there is one or more chars in the string b that is not 0 or 1
		b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, sum, length, base;

	if (b == 0)
	{
		return (0);
	}
	for (i = 0;b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	length = _strlen(b);
	sum = 0;
	for (i = 0, j = length; i < length; i++, j--)
	{
		base = _pow_recursion(2, j - 1);
		sum = sum + (((b[i]) - '0') * base);
	}
	return (sum);
}
