#include "lists.h"
/**
 * free_list - 
*/
void free_list(list_t *head)
{
	list_t *h;

	while (head != 0)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
	head = NULL;
}
