#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newely created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (new_t == NULL)
	{
		return (NULL);
	}

	new_t->size = size;
	new_t->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	return (new_t);
}
