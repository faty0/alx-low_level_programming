#include "main.h"
#include <stdlib.h>
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
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: bytes size of each element
 *
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb != 0 && size != 0)
	{
		arr = malloc(nmemb * size);
		if (arr != NULL)
		{
			_memset(arr, 0, nmemb * size);
			return (arr);
		}
	}
	return (NULL);
}
