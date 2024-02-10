#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head of the list_t list.
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str) ? strdup(str) : (NULL);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
