#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints whether the number stored in the variable n is positive or negative.
 *Return: 0 to exit
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i\n is positive", n);
	}
	else if(n == 0)
	{
		printf("%i\n is zero", n);
	}
	else
	{
		printf("%i\n is negative", n);
	}
	return (0);
}
