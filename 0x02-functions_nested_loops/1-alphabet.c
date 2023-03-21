#include "main.h"
/**
 * print_alphabet - print lowecase alphabet
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i != 122)
	{
		_putchar(i);
		i += 1;
	}
	_putchar('\n');
}
