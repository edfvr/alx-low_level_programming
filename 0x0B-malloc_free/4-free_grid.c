#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid : pointer to 2d array
 * @height : param
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
