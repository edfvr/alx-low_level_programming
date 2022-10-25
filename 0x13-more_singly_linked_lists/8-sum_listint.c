#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head : pointer
 * Return: if the list is empty, return 0,
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == 0)
	{
		return (0);
	}

	while (head != 0)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
