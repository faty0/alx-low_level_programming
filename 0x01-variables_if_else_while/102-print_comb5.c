#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d, sp, cl;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	sp = 32;
	cl = 44;
	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				while (d <= 57)
				{
					if ((a <= c && b <= d) && (a != c || b != d))
					{
						putchar(a);
						putchar(b);
						putchar(sp);
						putchar(c);
						putchar(d);
						if (a != 57 || b != 56 || c != 57 || d != 57)
						{
							putchar(cl);
							putchar(sp);
						}
					}
					d += 1;
				}
				c += 1;
				d = 48;
			}
			b += 1;
			c = 48;
		}
		a += 1;
		b = 48;
	}
	putchar('\n');
	return (0);
}
