#include "lists.h"

/**
 * dlistint_len - eturns the number of elements in a 
 * linked dlistint_t list.
 * @h: pointer to linked dlistint_t list.
 *
 * Return: the number of elements in 
 * a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
