#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: adress of a pointer to head
 * @index: the index of element to delete
 *
 * Return: 1 (Success)
 * -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *p;

	if (!head || !*head)
		return (1);
	if (index == 0 && !(*head)->next)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	p = *head;
	if (index == 0 && (*head)->next)
	{
		free(*head);
		*head = p->next;
		return (1);
	}
	while (p)
	{
		if (n == index - 1)
		{
			p->next = p->next->next;
		}
		if (n == index)
		{
			free(p);
			return (1);
		}
		n++;
		p = p->next;
	}
	return (-1);
}