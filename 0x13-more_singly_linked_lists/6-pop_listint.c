#include "lists.h"

/**
 * pop_listint -  deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head : pointer to the head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
