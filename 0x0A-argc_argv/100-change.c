#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc : size of array
 * @argv : array
 * Return : 1 if no. of args is not 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents = cents - coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
