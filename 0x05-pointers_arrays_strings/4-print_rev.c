#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: The string
*/

void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
