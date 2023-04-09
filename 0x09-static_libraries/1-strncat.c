#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes to use fron src
 *
 * Return: pointer to resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (n <= j)
	{
		for (k = 0; k < n; k++)
		{
			*(dest + i) = src[k];
			i++;
		}
	}
	if (n > j)
	{
		for (k = 0; k < j; k++)
		{
			*(dest + i) = src[k];
			i++;
		}
	}
	*(dest + (i + 1)) = '\0';
	return (dest);
}
