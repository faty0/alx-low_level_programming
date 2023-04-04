#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack:the string to look into
 * @needle:the substring
 *
 * Return: Success (pointer to beginninh of the located substring)
 * fail NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, length;

	i = j = length = 0;
	while (needle[length] != '\0')
		length++;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < length; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
				if (j == (length - 1))
					return (haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return ('\0');
}
