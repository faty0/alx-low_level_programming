#include "main.h"

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
