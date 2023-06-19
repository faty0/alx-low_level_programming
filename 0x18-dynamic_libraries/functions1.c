#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: The character to check
 *
 * Return: Case is digit 1
 * Otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _strlen - Return the length of a string
 * @s: The string to calculate its length
 *
 * Return: The length of the the string
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _puts - Prints a string
 * @str: The string to print
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _strcpy - Copies a string to buffer
 * @dest: destination string
 * @src: source string
 *
 * Return: A pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer
*/
int _atoi(char *s)
{
	int i, j, count, start, tens, integerr;
	char signn;

	i = integerr = 0;
	count = tens = 1;
	start = -1;
	signn = '+';
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				signn = '-';
			if (count == 1)
				start = i;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				count++;
			else
			{
				if (s[i + 1] != '\0')
					signn = '+';
				break;
			}
		}
		i++;
	}
	if (start != -1)
	{
		for (j = (start + count - 1); j >= start; j--)
		{
			integerr += ((s[j] - 48) * tens);
			tens *= 10;
		}
	}
	if (signn != '+')
		integerr = -integerr;
	return (integerr);
}
