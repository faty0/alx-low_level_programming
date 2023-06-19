#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to append to
 * @src: The string to append
 *
 * Return: Pointer to resulting string
*/
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = j = k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	for (k = 0; k < j; k++)
	{
		*(dest + i) = src[k];
		i++;
	}
	*(dest + (i + 1)) = '\0';
	return (dest);
}

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

/**
 * _memset - Fills memory with constant byte
 * @s:memory area to fill
 * @b:constant byte
 * @n:first bytes to fill
 *
 * Return: Always a pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
