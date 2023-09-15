#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nex;
	int first = 1;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				nex = ht->array[i];
				while (nex)
				{
					if (!first)
						printf(", ");
					printf("'%s': '%s'", nex->key, nex->value);
					nex = nex->next;
					first = 0;
				}
			}
		}
		printf("}\n");
	}
	else
	{
		printf("{}\n");
	}
}
