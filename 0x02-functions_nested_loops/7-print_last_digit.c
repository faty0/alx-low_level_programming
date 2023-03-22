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
	long int d;

	d = c;
	if (d < 0)
		d *= (-1);
	m = d % 10;
	_putchar('0' + m);
	return (m);
}
