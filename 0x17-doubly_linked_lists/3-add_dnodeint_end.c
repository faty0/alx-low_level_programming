#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a D linked list
 * @head: adress of the pointer to first node
 * @n: the value of node to add
 *
 * Return: the address of the new element
 * NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

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
		while (current->next)
		{
			current = current->next;
		}
		new->next = NULL;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
