#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer data
 * @next: points to the next node in the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif