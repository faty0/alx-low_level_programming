#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s:the string to check
 * @accept:contains bytes to check for
 *
 * Return: number of bytes in initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, found;

	i = j = count = 0;
	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
			j++;
		}
		if (!found)
			break;
		count++;
		i++;
	}
	return (count);
}
