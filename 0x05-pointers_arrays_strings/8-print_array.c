#include "main.h"

/**
 * print_integer - Print an integer one digit by one
 * @n: The integer to print
*/

void print_integer(int d)
{
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	if (d / 10)
	{
		print_integer(d / 10);
	}
	_putchar((d % 10) + '0'); 
}

/**
 * print_array - Prints n elements of an array of integers
 * @a:The array
 * @n: Number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_integer(a[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
