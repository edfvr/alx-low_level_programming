#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b : bytes
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
