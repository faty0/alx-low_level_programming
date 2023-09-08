#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newely created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (new_t && size >= 0)
	{
		new_t->size = size;
		new_t->array = calloc(size, sizeof(hash_node_t));
		if (!(new_t->array))
		{
			free(new_t);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			new_t->array[i] = NULL;
		return (new_t);
	}

	return (NULL);
}
