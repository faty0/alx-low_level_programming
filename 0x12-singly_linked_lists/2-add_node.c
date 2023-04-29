#include "lists.h"
/**
 * add_node - dds a new node at the beginning of a list
 * @head: pointer to the pointer to head
 * @str: the string of the new element
 *
 * Return: On Success (the address of the new element)
 * On Faillure (NULL)
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int l = 0;

	if (!new)
		return (NULL);
	while (str[l])
		l++;
	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;
	return (new);
}
