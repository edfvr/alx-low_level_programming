#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0 to exit successfully
 */

int main(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
