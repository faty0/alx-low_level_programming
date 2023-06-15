#include "lists.h"
 /**
  * free_dlistint - frees a list
  * @head: pointer to head of list to free
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
	head = NULL;
}
