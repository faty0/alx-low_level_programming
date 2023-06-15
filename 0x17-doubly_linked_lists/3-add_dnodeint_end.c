#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to adress of the head
 * @n: the node to add
 *
 * Return: the adress of new element
 * NULL on faillure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *next = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!(*head) || !head)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		while (next->next)
			next = next->next;
		next->next = new;
		new->prev = next;
	}
	return (new);
}
