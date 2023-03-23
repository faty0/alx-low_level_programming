#include "main.h"

/**
 * print_most_numbers - Print 0-9
 * except 2 & 4.
 *
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
