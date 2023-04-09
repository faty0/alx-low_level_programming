#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s:the string to perform the search on
 * @c:the character to search
 *
 * Return: Success (pointer to first occurence)
 * fail (NULL)
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) >= '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
