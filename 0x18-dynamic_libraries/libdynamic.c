#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - check if a character is lowecase
 *@c: the character to check
 *
 * Return: 0 (True)
 * 1 (false)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isalpha - check if a character is an alphabet
 *@c: the character to check
 * Return: 1 (Success)
 * 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _abs - computes the absolute value of a number
 * @c: the number to compute its value
 *
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	return (c);
}

/**
 * _isupper - checks for uppercase character
 * @c: ASCII code of the character to check
 *
 * Return: case uppercase 1
 * Otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
