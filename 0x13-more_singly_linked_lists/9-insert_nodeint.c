#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head : head
 * @idx : index of the list where the new node should be added.
 * Index starts at 0
 * @n : int
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp, *a, *b;

	if (!(*head) && idx != 0)
	{
		return (NULL);
	}

	b = *head;
	a = b;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == 0 || head == 0)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node = b;
		if (i == idx)
		{
			new_node->next = b;
			a->next = new_node;
			return (new_node);
		}
		b = b->next;
		b = tmp;
		i++;
	}
	return (NULL);
}
