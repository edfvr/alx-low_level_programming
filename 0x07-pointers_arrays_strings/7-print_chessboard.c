#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a : 2d array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((i[a][j]));
		}
		_putchar('\n');
	}
}
