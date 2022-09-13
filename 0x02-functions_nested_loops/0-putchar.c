#include "main.h"
/**
 * main - print _putchar
 * Return: 0 for success 
 */
int main(void)
{
	int i;
	char s[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');		    
	return 0;
}
