#include "main.h"
/**
 * _strstr -  finds the first occurrence of the substring
 * needle in the string haystack
 *  The terminating null bytes (\0) are not compared
 * @haystack : string to be scanned
 * @needle : small string to be searched within haystack
 * Return: pointer to the first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (h);
		}
		needle = n;
		h++;
		haystack = h;
	}
	return (0);
}
