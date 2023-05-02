#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list
 * @head: Adress of the pointer to head
 *
 * Return: head node data (Success)
 * 0 (empty list)
*/
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head)
	{
		data = (*head)->n;
		*head = (*head)->next;
	}
	return (data);
}
