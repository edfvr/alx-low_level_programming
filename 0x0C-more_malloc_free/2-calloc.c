#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb : no. of elements of array
 * @size : size of array elements
 * Return: If nmemb or size is 0, or if malloc fails; NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(size * nmemb);

	if (a == NULL)
	{
		return (NULL);
	}

	while (i < size * nmemb)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
