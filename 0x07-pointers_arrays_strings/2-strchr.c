#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s : string
 * @c : a character
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
