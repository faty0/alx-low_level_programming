#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack:the string to look into
 * @needle:the substring
 *
 * Return: Success (pointer to beginning of the located substring)
 * fail NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, length;
	char *p = 0;

	i = j = length = 0;
	if (needle != "")
	{
		while (needle[i] != '\0')
		{
			length++;
			j++;
		}
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
	}
	return (p);
}
