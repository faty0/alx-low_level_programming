#include "main.h"

/**
 * _strcpy - Copies a string to buffer
 * @dest: destination string
 * @src: source string
 *
 * Return: A pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
