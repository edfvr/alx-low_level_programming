#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1 : string
 * @s2 : string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, len1 = 0, len2 = 0, i, j;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2;
	c = malloc(sizeof(char) * len);
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		c[i] = s2[j];
		i++;
		j++;
	}
	return (c);
}

