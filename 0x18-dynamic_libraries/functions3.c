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
