#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: 0 to exit successfully
 */

int main(void)
{
	int j;
	char i;
	for (j = 48; j <= 57; j++)
	{
		putchar(j);
	}

	for (i = 'A'; i <= 'F'; i++)
	{
		putchar(i);
	}
	putchar(10);
	return(0);
}

