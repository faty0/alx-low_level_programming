#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest:memory destination
 * @src:memory source
 * @n:number of bytes to copy
 *
 * Return: Always pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}