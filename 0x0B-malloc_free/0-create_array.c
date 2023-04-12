#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array to create
 * @c: The character to initialise with
 *
 * Return: Pointer to the created array (Success)
 * NULL on failure
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size > 0)
	{
		s = malloc((sizeof(char)) * size);
		for (i = 0; i < size; i++)
		{
			*(s + i) = c;
		}
		return (s);
	}
	return (NULL);
}
