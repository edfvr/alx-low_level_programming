#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str : string
 * Return: Returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	newstr = malloc(i * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);
}

