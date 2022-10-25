#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc : number of arguments passed to the program
 * @argv : array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int denom_ = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		denom_++;
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
		}
		else if ((cents - 10) >= 0)
		{
			cents = cents - 10;
		}
		else if ((cents - 5) >= 0)
		{
			cents = cents - 5;
		}
		else if ((cents - 2) >= 0)
		{
			cents = cents - 2;
		}
		cents--;
	}
	printf("%d\n", denom_);
	return (0);
}
