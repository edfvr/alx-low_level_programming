#include "main.h"

/**
 * rev_string - reverses a string
 * @s : pointer to s
 */
void rev_string(char *s)
{
        char c;
        int i, x = 0, y = 0;

        while (s[x] != '\0')
        {
                x++;
        }

        y = x - 1;

        for (i = 0; i < x / 2; i++)
        {
                c = s[i];
                s[i] = s[y];
                s[y--] = c;
        }
}