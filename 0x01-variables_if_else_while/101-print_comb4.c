#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, n, d, s, k;

	c = 48;
	n = 49;
	d = 44;
	s = 32;
	k = 50;
	while (c <= 55)
	{
		while (n <= 56)
		{
			while (k <= 57)
			{
				putchar(c);
				putchar(n);
				putchar(k);
				if (c != 55 || n != 56 || k != 57)
				{
					putchar(s);
					putchar(d);
				}
				k += 1;
			}
			n += 1;
			k = n + 1;
		}
		c += 1;
		n = c + 1;
		k = n + 1;
	}
	putchar('\n');
	return (0);
}
