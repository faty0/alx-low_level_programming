#include "main.h"

/**
 * more_numbers - print 10 times
 * numbers 0-14
 *
 */

void more_numbers(void)
{
	int i, j, k;

	k = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (k >= 10)
			{
				if (k == 10)
					j = 0;
				_putchar('0' + 1);
			}
			_putchar('0' + j);
			k++;
			if (k == 15)
				break;
		}
		_putchar('\n');
		j = k = 0;
	}
}
