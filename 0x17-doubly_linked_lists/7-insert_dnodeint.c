#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the adress of first node
 * @idx: index of the list where the new node should be added
 * @n: the data to add
 *
 * Return:  the address of the new node
 * NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *new = NULL;
	dlistint_t *current;

	if ((!(*h) || !h) || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	current = *h;
	while (current)
	{
		if (c == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
		}
		current = current->next;
		c++;
	}
	return (new);
}
