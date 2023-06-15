#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n) of a list
 * @head: pointer to first node
 *
 * Return: the sum of all data
 * 0 upon faillure
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
