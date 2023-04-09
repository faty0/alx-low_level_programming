#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:the string to search
 * @accept:the bytes to match
 *
 * Return: Success (pointer to byts that match)
 * fail NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = 0;

	i = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (p);
}
