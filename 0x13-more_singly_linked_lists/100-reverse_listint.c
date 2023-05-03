#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t list
 * @head: adress of the pointer to head
 *
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *next = NULL;

	while ((*head)->next)
	{
		tmp = *head;
		(*head)->next = next;
		next = *head;
		*head = tmp->next;
	}
	(*head)->next = next;
	return (*head);
}
