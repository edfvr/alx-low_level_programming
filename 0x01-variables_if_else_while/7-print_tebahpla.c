#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 to exit successfully
 */


int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
