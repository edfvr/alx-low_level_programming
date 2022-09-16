#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n : number of times the character `\` is printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(32);
			}
		}
	}
}
