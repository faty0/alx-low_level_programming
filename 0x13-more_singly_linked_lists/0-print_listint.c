#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: pointer to the list to check
 *
 * Return: number of elements in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
