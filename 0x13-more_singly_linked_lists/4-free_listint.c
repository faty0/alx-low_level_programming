#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: pointer to head
*/
void free_listint(listint_t *head)
{
	listint_t *next = head;

	while (head->next)
	{
		next = head->next;
		free (head);
		head = next;
	}
	free (head);
}
