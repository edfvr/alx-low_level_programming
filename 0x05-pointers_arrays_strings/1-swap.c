#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: pointer to a
 * @b: pointer to b
 */

void swap_int(int *a, int *b)
{
		int x;

		x = *a;
		*a = *b;
		*b = x;
}
