#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the string one
 * @s2: the string two
 *
 * Return: Pointer the resulted concatenated
 * string on Success
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *concate;

	i = j = k = l = 0;
	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + j) != '\0')
			j++;
	}
	concate = malloc(sizeof(char) * ((i + j) + 1));
	if (concate != NULL)
	{
		for (k = 0; k < i; k++)
			*(concate + k) = *(s1 + k);
		for (l = 0; l < j; l++)
		{
			*(concate + k) = *(s2 + l);
			k++;
		}
		*(concate + (i + j)) = '\0';
		return (concate);
	}
	return (NULL);
}
