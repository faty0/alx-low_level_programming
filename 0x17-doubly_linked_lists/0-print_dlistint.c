#include "lists.h"
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			c++;
			h = h->next;
		}
	}
	return (c);
}
