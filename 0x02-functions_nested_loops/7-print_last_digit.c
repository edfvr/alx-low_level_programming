#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @r : variable
 * Return: 0 (Success)
 */
int print_last_digit(int r)
{
	int x;

	x = r % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
