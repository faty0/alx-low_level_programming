#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a list
 * @head: Adress of the pointer to head
 * @n: Element to add
 *
 * Return: adress of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
