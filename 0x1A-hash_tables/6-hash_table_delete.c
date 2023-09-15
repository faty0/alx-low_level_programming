#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table
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
				nex = ht->array[i];
				tofree = ht->array[i];
				while (nex)
				{
					if (tofree->key)
						free(tofree->key);
					if (tofree->value)
						free(tofree->value);
					free(tofree);
					tofree = nex->next;
					nex = nex->next;
				}
				free(nex);
			}
		}
		free(ht);
	}
}
