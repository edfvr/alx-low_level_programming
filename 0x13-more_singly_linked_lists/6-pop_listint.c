#include "lists.h"

/**
 * pop_listint - the head node of a listint_t linked list
 * @head: pointer to the head of a listint_t list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (*head == NULL)
		return (0);

	a = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (a);
}
