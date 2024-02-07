#include "hash_tables.h"

hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	
	if (new_node == NULL)
	{
		perror("Failed to allocate memory for new node");
		exit(EXIT_FAILURE);
	}

	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL;
	return new_node;
}

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		perror("Failed to allocate memory for hash table");
		return NULL;
	}
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		perror("Failed to allocate memory for hash table array");
		free(new_table);
		return NULL;
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return new_table;
}
