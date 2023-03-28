#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string
*/

void puts_half(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 == 0)
	{
		for (j = (len / 2); j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	if (len % 2 != 0)
	{
		for (j = ((len / 2) + 1); j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
