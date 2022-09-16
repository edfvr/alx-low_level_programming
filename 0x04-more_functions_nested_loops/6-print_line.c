#include "main.h"

/**
 * print_line - prints a straight line in the terminal.
 * @i : variable
 * @n : number of times the character `_` is printed
 */
void print_line(int n)
{
    int i = 0;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (i < n)
        {
            i++;
            _putchar('_');
        }
        _putchar('\n');
    }
}