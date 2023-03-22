#include "main.h"
/**
 * print_times_table - print n times table
 * @n: how many times
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, m, first, second, third;

	i = j = 0;
	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				m = i * j;
				if (m < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + m);
				}
				else if (m < 100)
				{
					first = m / 10;
					second = m - (first * 10);
					_putchar(' ');
					_putchar('0' + first);
					_putchar('0' + second);
				}
				else
				{
					first = m / 100;
					second = (m / 10) - (first * 10);
					third = m % 10;
					_putchar('0' + first);
					_putchar('0' + second);
					_putchar('0' + third);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j += 1;
			}
			_putchar('\n');
			i += 1;
			j = 0;
		}
	}
}
