#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to reverse
*/

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
	{
		while (j <= len / 2)
		{
			temp = s[i - 1];
			*(s + (i - 1)) = s[j];
			*(s + j) = temp;
			i--;
			j++;
		}
	}
	else
	{
		while (j < len / 2)
		{
			temp = s[i - 1];
			*(s + (i - 1)) = s[j];
			*(s + j) = temp;
			i--;
			j++;
		}
	}
}
