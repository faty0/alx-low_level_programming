#include "main.h"
/**
 * print_last_digit - print last digit
 * @c: the number
 *
 * Return: void
 */
int print_last_digit(int c)
{
	int  m;
	
	m = c % 10;
	if (c < 0)
	{
		m *= -1;
	}
	_putchar('0' + m);
	return (0);
}
