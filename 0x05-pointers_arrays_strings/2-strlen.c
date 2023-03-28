#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: The string to calculate its length
 *
 * Return: The length of the the string
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
