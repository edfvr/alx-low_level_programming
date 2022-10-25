#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head : pointer to the list's head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != 0)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
