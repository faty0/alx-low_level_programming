#include "main.h"
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
