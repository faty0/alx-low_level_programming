#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	unsigned long int i;
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	i = key_index((unsigned char *)"betty", ht->size);
	printf("My first node, key: %s, value: %s, index: %ld\n", ht->array[i]->key, ht->array[i]->value, i);
	hash_table_set(ht, "betty", "notcool");
	printf("My first node, key: %s, value: %s, index: %ld\n", ht->array[i]->key, ht->array[i]->value, i);

    return (EXIT_SUCCESS);
}