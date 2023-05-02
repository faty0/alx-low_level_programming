#include "lists.h"
/**
 * insert_nodeint_at_index  - inserts new node at a given position
 * @head: adress of pointer to head
 * @idx: index where new node should be added
 * @n: data of new node
 *
 * Return: adress of the new node
 * NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 1;
	listint_t *new = malloc(sizeof(listint_t), *nex = *head;

	if (!head || !(*head))
		return (NULL);
	if (new)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		while (nex)
		{
			if (num == idx)
			{
				new->next = nex->next;
				nex->next = new;
				return (new);
			}
			nex = nex->next;
			num++;
		}
	}
	return (NULL);
}
