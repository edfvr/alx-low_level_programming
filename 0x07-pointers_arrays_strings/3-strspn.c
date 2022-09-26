#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s : string to be scanned
 * @accept : string containing characters to match s
 * Return: number of 
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i = 0;

	while (s[0])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[0] == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (x);
			}
		}
		s++;
	}
	return (x);
}
