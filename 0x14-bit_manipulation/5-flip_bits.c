#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: bit
 * @m: another bit
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int i = 0;

	while (x != 0)
	{
		if (i & 1)
		{
			i++;
			i >>= 1;
		}
	}

	return (i);
}
