#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name :  name
 * @f : pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		(*f)(name);
	}
}
