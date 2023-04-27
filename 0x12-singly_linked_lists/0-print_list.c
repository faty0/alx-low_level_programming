#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: a pointer to the list to print
 *
 * Return: Number of nodes
*/
size_t print_list(const list_t *h)
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
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	return (n);
}
