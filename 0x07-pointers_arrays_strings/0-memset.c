#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s : memory area
 * @b : character to be filled in
 * @n : number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
