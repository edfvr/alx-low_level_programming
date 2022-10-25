#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head : head
 * @index : the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *b, *a;
	unsigned int i;

	b = *head;
	a = b;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}

	while (b != 0)
	{
		tmp = b;
		if (i == index)
		{
			a->next = b->next;
			free(b);
			return (1);
		}
		b = b->next;
		a = tmp;
		i++;
	}
	return (-1);
}
