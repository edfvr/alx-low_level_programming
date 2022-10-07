#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n : number of bytes of string 2
 * Return: NULL, if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i])
	{
		len++;
		i++;
	}

	s = malloc(sizeof(char) * ((len + n) + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = s1[i];
	}

	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}

	s[i] = '\0';
	return (s);
}
