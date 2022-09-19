#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str : pointer to str
 */
void puts_half(char *str)
{
        int i, n, x = 0;

        while(str[x] != '\0')
        {
                x++;
        }
        if (x % 2 == 0)
        {
                for (i = x / 2; str[i] != '\0'; i++)
                {
                        _putchar(str[i]);
                }
        }
        else if (x % 2)
        {
                for (n = (x -1) / 2; n < x -1; n++)
                {
                        _putchar(str[n + 1]);
                }
        }
        _putchar('\n');
}