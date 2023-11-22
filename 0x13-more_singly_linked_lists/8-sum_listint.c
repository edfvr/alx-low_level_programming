#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to the head of a list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);

	while (head != 0)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
