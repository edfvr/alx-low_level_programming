#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of a list
 * @idx: index of the list where the new node should be added
 * @n: numner
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (head == NULL || idx != 0)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
