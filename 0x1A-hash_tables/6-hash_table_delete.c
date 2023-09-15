#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table
 * @ht:  is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nex;
	hash_node_t *tofree;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				tofree = ht->array[i];
				while (tofree)
				{
					nex = tofree->next;
					free(tofree->key);
					free(tofree->value);
					free(tofree);
					tofree = NULL;
					tofree = nex;
				}
				nex = NULL;
			}
		}
		free(ht->array);
		free(ht);
	}
}
