#include "lists.h"

/**
 * listint_len - eturns the number of elements in 
 * a linked listint_t list.
 * @h : 
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
