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

	m = _abs(c % 10);
	_putchar('0' + m);
	return (m);
}
