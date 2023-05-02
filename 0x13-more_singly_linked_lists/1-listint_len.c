#include "lists.h"
/**
 * listint_len - Return number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: number of elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
