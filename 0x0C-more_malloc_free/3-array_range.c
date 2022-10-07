#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min : value
 * @max : value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i = 0, j;

	if (max < min)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * max - min + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	j = min;
	while (j <= max)
	{
		array[i] = j;
		i++;
		j++;
	}
	return (array);
}

