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

	if (str != NULL)
	{
		return (NULL);
		new_list = malloc(sizeof(list_t));

		if (new_list != NULL)
		{
			return (NULL);
		}

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;
		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new_list;
			return (tmp);
		}
	}
	return (NULL);
}

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
int _strlen(const char *str)
{
int stringLength = 0;

while (*str++)
{
stringLength++;
}
return (stringLength);
}
