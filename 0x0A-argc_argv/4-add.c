#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc : the number of arguments passed to the program
 * @argv : array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int m = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		m = m + atoi(argv[i]);
	}
	printf("%d\n", m);
	return (0);
}
