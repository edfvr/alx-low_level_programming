#include "main.h"

/**
 * _isupper - checks if character is a number
 * @c : variable
 * Return: 1 if character is a number and 0 if not
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
