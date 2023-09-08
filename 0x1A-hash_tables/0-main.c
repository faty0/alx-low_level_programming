#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int i;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
	printf("Table size is: %ld\n", ht->size);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			printf("Element %ld is: %s\n", i, ht->array[i]->value);
	}
    return (EXIT_SUCCESS);
}
