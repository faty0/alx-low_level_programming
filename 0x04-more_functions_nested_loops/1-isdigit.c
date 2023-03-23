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
