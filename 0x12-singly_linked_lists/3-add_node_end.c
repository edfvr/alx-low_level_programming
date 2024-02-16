#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of the list.
 * @head: the list
 * @str: the string
 *
 * Return: the address of the new element,
 *  or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *tmp;
	size_t i;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str) ? strdup(str) : (NULL);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
