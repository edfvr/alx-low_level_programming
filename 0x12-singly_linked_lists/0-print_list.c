#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of a list_t list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[0] (nil)");
		}
		h = h->next;
		count++;
	}
	return (count);
}
