#include "main.h"

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
