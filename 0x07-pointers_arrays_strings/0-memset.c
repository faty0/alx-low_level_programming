#include "main.h"
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
