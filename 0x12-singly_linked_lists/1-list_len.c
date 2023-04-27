#include "lists.h"
/**
 * list_len -  returns the number of elements
 * in a linked list_t list
 * @h: a pointer to the list to print
 *
 * Return: number of elements in a list
*/
size_t list_len(const list_t *h)
{
	list_t *head = NULL;
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);
	head = malloc(sizeof(list_t));
	*head = *h;
	while (head != NULL)
	{
		n++;
		head = head->next;
	}
	return (n);
}
