#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to first node of the list
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
