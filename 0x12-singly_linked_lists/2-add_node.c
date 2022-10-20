#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head : head of the list `list_t`
 * @str : string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == 0)
		{
			free(new_node);
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (0);
}
