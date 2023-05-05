#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: number to print its binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int first = 0, bits = (sizeof(n) * 8) - 1;

	mask <<= bits;
	if (!n)
		_putchar('0');
	while (mask)
	{
		if (mask & n)
		{
			_putchar('1');
			first = 1;
		}
		else
		{
			if (first)
				_putchar('0');
		}
		mask >>= 1;
	}
}
