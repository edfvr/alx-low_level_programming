#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1 : parameter
 * @s2 : parameter
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
