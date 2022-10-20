#include "main.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head : head of list_t
 * @str : string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	if (str != NULL)
	{
		return (NULL);
		new_node = malloc(sizeof(list_t));

		if (new_node != NULL)
		{
			return (NULL);
		}

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new_node;
			return (tmp);
		}
	}
}
