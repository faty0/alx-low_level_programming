#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: the string to encode.
 *
 * Return: pointer to encoded string.
*/
char *leet(char *str)
{
	int i, j;
	char code[] = "a4A4e3E3o0O0t7T7l1L1";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 15; j++)
		{
			if (str[i] == code[j] && (str[i] < '0' || str[i] > '9'))
			{
				*(str + i) = code[j + 1];
			}
		}
		i++;
	}
	return (str);
}
