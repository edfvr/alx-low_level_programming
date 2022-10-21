#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head : head of the list `list_t`
 * @str : string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *tmp = NULL;

	tmp = malloc(sizeof(list_t));
	if (tmp == 0)
	{
		free(tmp);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	if (strdup(str))
	{
		tmp->str = strdup(str);
	}
	else
	{
		tmp->str = NULL;
	}
	tmp->len = i;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
