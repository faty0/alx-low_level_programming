#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: the string to copy
 *
 * Return: Pointer to the created dstring (Success)
 * NULL on failure
*/
char *_strdup(char *str)
{
	char *strin;
	int i = 1;

	if (str != NULL)
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
		strin = malloc(sizeof(char) * (i + 1));
		i = 0;
		if (strin != NULL)
		{
			while (*(str + i) != '\0')
			{
				*(strin + i) = *(str + i);
				i++;
			}
			return (strin);
		}
	}
	return (NULL);
}
