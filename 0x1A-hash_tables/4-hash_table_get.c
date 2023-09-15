#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key:  is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *nex;

	if (!ht)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		else
		{
			nex = ht->array[i];
			while (nex)
			{
				if (strcmp(nex->key, key) == 0)
					return (nex->value);
				nex = nex->next;
			}
		}
	}
	return (NULL);
}
