#include "main.h"
/**
 * times_tables - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, m, first, second;

	i = j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			m = i * j;
			if (m < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				first = m / 10;
				second = m - (first * 10);
				_putchar('0' + first);
				_putchar('0' + second);
			}
			if (j != 9)
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
