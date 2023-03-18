#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, n, d, s, dec;

	c = 48;
	n = 49;
	d = 44;
	s = 32;
	dec = 49;
	while (c <= 56)
	{
		while (n <= 57)
		{
			putchar(c);
			putchar(n);
			n += 1;
			if (c != 56)
			{
				putchar(d);
				putchar(s);
			}
		}
		dec += 1;
		n = dec;
		c += 1;
	}
	putchar('\n');
	return (0);
}
