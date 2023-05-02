#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: Adress of the pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *next = *head;

	while (next)
	{
		next = next->next;
		free(*head);
		*head = next;
	}
	free(*head);
	*head = NULL;
}
