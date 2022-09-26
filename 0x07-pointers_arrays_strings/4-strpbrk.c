#include "main.h"
/**
 * _strpbrk -  locates the first occurrence in the string `s`
 * of any of the bytes in the string `accept`
 * @s : string
 * @accept : another string
 * Return: a pointer to the byte in `s`
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
