#include "main.h"
#include <stdlib.h>
/**
 * print_grid -  returns a pointer to a 2 dimensional array of integers
 * @width : number of cols or length of rows
 * @height : numner pr rows or length of cols
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width < 1)
	{
		return (NULL);
	}
	if (height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i-- >= 0)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
		i++;
	}
	return (grid);
}

