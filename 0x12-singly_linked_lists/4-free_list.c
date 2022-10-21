#include "lists.h"

/**
 * free_list - frees a list
 * @head : list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != 0)
	{
		tmp = head;
		free(head->str);
		free(head);
		head = tmp->next;
	}
}
