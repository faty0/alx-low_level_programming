#include "main.h"
/**
 * _strncpy - Copies a string.
 * @dest: Destination string
 * @src: Source strint
 * @n: Number of byte
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		if (j > i)
			*(dest + j) = '\0';
		else
			*(dest + j) = src[j];
	}
	return (dest);
}
