#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a list
 * @head: Adress of the pointer to first node
 * @n: the new element
 *
 * Return: Adress of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!p)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (!(*head))
		*head = p;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = p;
	}
	return (p);
}
