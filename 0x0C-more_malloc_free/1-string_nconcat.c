#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2
 *
 * Return: pointer to newely allocated memory
 * NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, l1;

	i = j = k = l1 = 0;
	while (*(s1 + i) != '\0' || *(s2 + j) != '\0')
	{
		if (*(s1 + i) != '\0')
			i++;
		if (*(s2 + j) != '\0')
			j++;
	}
	l1 = i;
	if (n >= j)
		n = j;
	str = malloc(sizeof(char) * (l1 + n + 1));
	if (str != NULL)
	{
		for (i = 0; i < l1; i++)
			*(str + i) = *(s1 + i);
		for (j = 0; j < n; j++)
		{
			*(str + i) = *(s2 + j);
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
