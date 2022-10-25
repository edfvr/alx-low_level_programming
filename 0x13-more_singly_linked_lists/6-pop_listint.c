#include "lists.h"

/**
 * pop_listint -  deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head : pointer to the head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!(*head))
	{
		return (0);
	}

	tmp = *head
	i = tmp->n;
	tmp = tmp->next;

	free(*head);
	*head = tmp;
	return (i);
}
