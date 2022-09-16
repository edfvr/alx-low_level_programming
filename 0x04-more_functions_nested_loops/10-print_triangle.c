#include "main.h"

/**
 * print_triangle - prints a diagonal line in the terminal.
 * @i : variable
 * @j : variable
 * @size : size of square
 */
void print_triangle(int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i + j < size - 1)
            {
                _putchar(32);
            }
            else
            {
                _putchar('#');
            }
        }
        _putchar('\n');
    }
}