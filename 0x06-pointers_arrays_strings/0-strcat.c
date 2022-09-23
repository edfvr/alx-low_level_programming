#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest : pointer
 * @src : pointer
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int i;

	while (dest[x])
	{
		x++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[x] = src[i];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
