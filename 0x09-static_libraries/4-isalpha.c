#include "main.h"
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
