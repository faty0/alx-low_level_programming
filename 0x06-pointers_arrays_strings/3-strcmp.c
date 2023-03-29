#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: integer
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = j = k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	while (s1[k] != '\0' || s2[k] != '\0')
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		k++;		
	}
	return (0);
}
