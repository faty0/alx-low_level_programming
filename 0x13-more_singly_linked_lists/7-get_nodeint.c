#include "lists.h"
/**
 * get_nodeint_at_index - Finds the nth node of a linked list
 * @head: pointer to head
 * @index:  index of the node
 *
 * Return: the nth node of a linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		n++;
		head = head->next;
	}
	return (NULL);
}
