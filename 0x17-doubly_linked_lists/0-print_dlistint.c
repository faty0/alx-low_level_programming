#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int n = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
