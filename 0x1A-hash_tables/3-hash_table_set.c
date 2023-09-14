#include "hash_tables.h"

/**
 * create_node - creates a node of hash table
 * @key: the key
 * @value: is the value associated with the key
 *
 * Return: pointer to newly created node
 * NULL on faillure
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);
	new->key = (char *) malloc(sizeof(key) + 1);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = (char *) malloc(sizeof(value) + 1);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;
	return (new);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 on success
 * 0 upon faillure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (!key || !ht)
	{
		return (0);
	}

	i = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[i]))
	{
		ht->array[i] = create_node(key, value);
		if (!(ht->array[i]))
			return (0);
	}
	else
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			strcpy(ht->array[i]->value, value);
		}
		else
		{
			hash_node_t *new = create_node(key, value);

			if (!new)
				return (0);
			new->next = ht->array[i];
			ht->array[i] = new;
		}
	}
	return (1);
}
