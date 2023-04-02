#include "main.h"
/**
 * print_number - Prints an integer
 * @n: the integer to print
*/
void print_number(int n)
{
	int l, i, k, tens;

	i = 0;
	l = n;
	tens = 1;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (l / 10)
	{
		i++;
		l /= 10;
	}
	while (i >= 0)
	{
		for (k = 0; k < i; k++)
		{
			tens *= 10;
		}
		l = (n / tens) % 10;
		i--;
		tens = 1;
	}
}
