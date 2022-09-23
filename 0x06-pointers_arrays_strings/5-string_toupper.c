#include "main.h"

/**
 * string_toupper - A function that changes lowercase to uppercase
 * @ : String in lowercase
 * Return: String in uppercase
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 97 && x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
