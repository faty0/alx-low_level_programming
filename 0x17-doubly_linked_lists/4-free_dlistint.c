#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first node
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
