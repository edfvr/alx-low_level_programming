#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head : pointer
 * @n : int 
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *tmp;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	
	if (new_node == 0)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head)))
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
