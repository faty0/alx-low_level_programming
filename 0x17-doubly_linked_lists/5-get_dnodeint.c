#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a linked list
 * @head: pointer to first node
 * @index: indexx of the node
 *
 * Return: the nth node
 * Null on faillure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *h = NULL;

	if (head)
	{
		h = head;
		while (h)
		{
			if (c == index)
				return (h);
			h = h->next;
			c++;
		}
	}
	return (h);
}
