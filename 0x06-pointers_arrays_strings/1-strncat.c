#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest : parameter
 * @src : parameter
 * @n : parameter
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, i;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		{
			x++;
			j++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
