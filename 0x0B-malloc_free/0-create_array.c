#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size : the array's size
 * @c : char variable
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
