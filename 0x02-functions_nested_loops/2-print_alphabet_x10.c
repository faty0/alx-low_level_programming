#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;
	while (j != 10)
	{
		i = 97;
		while (i != 123)
		{
			_putchar(i);
			i += 1;
		}
		j += 1;
		_putchar('\n');
	}
}
