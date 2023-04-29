#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: a pointer to the list to print
 *
 * Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("[%d] %s\n", h->len, (h->str ? h->str : "(nil)"));
		h = h->next;
	}
	return (n);
}
