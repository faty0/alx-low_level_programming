#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a Dlinked list
 * @head: adress of pointer to first node
 * @n: the node to add
 *
 * Return: the address of the new element
 * NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	if (!(*head) || !head)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
