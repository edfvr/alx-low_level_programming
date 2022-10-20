#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head : head of list_t
 * @str : string
 * Return: the address of the new element, 
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *tmp;
	size_t i = 0;

	new_list = malloc(sizeof(list_t));
	
	if (new_list == NULL)
	{
		free(new_list);
		return (NULL);
	}

	for (i = 0; str[i]; i++);

	if (strdup(str))
	{
		new_list->str = strdup(str);
	}
	else
	{
		new_list->str = NULL;
	}

	new_list->len = i;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_list;
		return (tmp);
	}
}
