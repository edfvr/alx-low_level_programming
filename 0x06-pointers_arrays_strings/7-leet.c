#include "main.h"

/**
 * leet - encodes a string into '1337'
 * @x: parameter
 * Return: x
 */
char *leet(char *x)
{
	int i, j;
	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == m[j])
			{
				x[i] = n[j];
			}
		}
	}
	return (x);
}
