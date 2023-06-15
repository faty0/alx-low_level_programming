#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the adress of head
 * @n: the number of element to add
 *
 * Return: adress of new element
 * NULL upon faillure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head) || !head)
	{
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
