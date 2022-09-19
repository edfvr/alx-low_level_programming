#include "main.h"
#include <stdio.h>

/**
 * print_array - prints every other character of a string
 * @a : pointer to str
 * @n : no. of elements of the array
 */
void print_array(int *a, int n)
{
        int i = 0;
        i = 0; 

        for (n--; n >= 0; n--, i++)
        {
                printf("%d", a[i]);
        }
        if (n > 0)
        {
                printf(", ");
        }
        print("\n");
}