#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - number of elements in a linked list
 * @h: pointer to the header
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	if (!h)
		return (0);
	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
