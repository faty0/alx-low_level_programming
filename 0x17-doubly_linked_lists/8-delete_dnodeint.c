#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to first node
 * @index: the index of the node that should be deleted
 *
 * Return: 1
 * -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0, l = 0;
	dlistint_t *cu;

	if (head && *head)
	{
		cu = *head;
		while (cu)
		{
			l++;
			cu = cu->next;
		}
		if (index == (l - 1))
		{
			cu->prev->next = NULL;
			free(cu);
			return (1);
		}
		cu = *head;
		if (index == 0)
		{
			*head = cu->next;
			(*head)->prev = NULL;
			free(cu);
			return (1);
		}
		while (cu)
		{
			if (c == index)
			{
				cu->prev->next = cu->next;
				cu->next->prev = cu->prev;
				free(cu);
				return (1);
			}
			cu = cu->next;
			c++;
		}
	}
	return (-1);
}
