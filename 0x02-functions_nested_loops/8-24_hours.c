#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l, change;

	i = j = k = l = 48;
	change = 57;
	while (i <= 50)
	{
		if (i == 50)
			change = 51;
		while (j <= change)
		{
			while (k <= 53)
			{
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l += 1;
				}
				k += 1;
				l = 48;
			}
			j += 1;
			k = 48;
		}
		i += 1;
		j = 48;
	}
}
