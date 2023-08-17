#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the first node
 *
 * Return: the number of elements in a doubly linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
