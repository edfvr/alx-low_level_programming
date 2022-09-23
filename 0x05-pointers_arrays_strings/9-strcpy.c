#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest : pointer to dest
 * @src : pointer to src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
