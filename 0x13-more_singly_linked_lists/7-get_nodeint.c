#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of a listint_t linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (count < index || head == NULL)
		return (NULL);

	return (head);
}
