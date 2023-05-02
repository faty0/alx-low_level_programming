#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: Adress of the pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *next, *tofree;

	if (*head == NULL || head == NULL)
		return;
	tofree = *head;
	while (tofree)
	{
		next = tofree->next;
		free(tofree);
		tofree = next;
	}
	*head = NULL;
}
