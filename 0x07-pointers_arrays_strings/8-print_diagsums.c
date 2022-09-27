#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a : 2d array
 * @size : size of 2d array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int result1  = 0, result2 = 0;

	for (i = 0; i < size; i++)
	{
		result1 = result1 + a[(size * i + i)];
		result2 = result2 + a[(size * i + size - 1 - i)];
	}
	printf("%d, ", result1);
	printf("%d\n", result2);
}
