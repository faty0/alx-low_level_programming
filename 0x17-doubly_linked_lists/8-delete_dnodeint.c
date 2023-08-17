#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of a linked list
 * @head: adress of pointer to first node
 * @index: the index of the node that should be deleted
 *
 * Return: 1
 * -1 upon faillure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (!(*head) || !head)
		return (-1);

	while (current)
	{
		if (index == 0)
		{
			if (current->next)
			{
				current->next->prev = NULL;
				*head = current->next;
				free(current);
			}
			else
			{
				*head = NULL;
				free(current);
			}
			return (1);
		}
		if (count == index)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
