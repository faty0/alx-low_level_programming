#include "lists.h"
/**
 * _strlen - Return the length of a string
 *@s: the string to calcullate its lenght
 *
 *Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
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

	if (*head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = _strlen(new->str);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
