#include "lists.h"
/**
 * sum_listint - sum all data of a linked list
 * @head: pointer to head
 *
 * Return: sum of all data
 * 0 if empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
