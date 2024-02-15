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
	unsigned int len;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			len = strlen(h->str);
			printf("[%d] %s\n", len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
