#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointer to adress of first node
 * @idx: the index to insert in
 * @n: the value to insert
 *
 * Return: the address of the new node
 * NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int v = 0;
	dlistint_t *current = *h;
	dlistint_t *new;

	if (!(*h) || !h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (current)
	{
		if (idx == 0)
		{
			free(new);
			return (add_dnodeint(h, n));
		}
		if (v == idx)
		{
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
		v++;
	}
	free(new);
	return (NULL);
}
