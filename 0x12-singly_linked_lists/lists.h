#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
int _strlen(char *s)
{
	int stringLenth = 0;

	while (*s++)
	{
		stringLenth++;
	}
	return (stringLenth);
}

int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif/*LISTS_H*/
