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

	if (c < 0)
		c *= (-1);
	m = c % 10;
	_putchar('0' + m);
	return (m);
}
