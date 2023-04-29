#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the pointer to head
 * @str: the string of the new element
 *
 * Return: On Success (the address of the new element)
 * On Faillure (NULL)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *h = malloc(sizeof(list_t));
	int l;

	l = 0;
	while (str[l])
		l++;
	new->str = strdup(str);
	new->len = l;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		free(h);
		return (*head);
	}
	h = *head;
	while (h->next)
		h = h->next;
	h->next = new;
	free(h);
	return (new);
}
