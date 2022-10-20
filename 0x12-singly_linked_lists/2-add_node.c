#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head : head of the list `list_t`
 * @str : string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == 0)
		{
			free(tmp);
			return (NULL);
		}
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	return (0);
}
