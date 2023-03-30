#include "main.h"
#include <stdlib.h>
/**
 * rot13 - encodes a string using rot13.
 * @str: the string to encode
 *
 * Return: a pointer to the ncoded string.
 **/
char *rot13(char *str)
{
	char ori[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	char *original = str;

	while (*str)
	{
		i = 0;
		while (ori[i] != '\0')
		{
			if (*str == ori[i])
			{
				*str = rot[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (original);
}
