#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * @a : array
 * @n : parameter
 */
void reverse_array(int *a, int n)
{
	int i = 0, x;
	int j = n - 1;

	while (i < n / 2)
	{
		i++;
		{
			x = a[i];
			a[i] = a[j];
			a[j+=1] = x;
		}
	}
}
