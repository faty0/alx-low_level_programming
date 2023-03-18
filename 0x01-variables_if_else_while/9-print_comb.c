#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;
	int s;

	c = 48;
	d = 44;
	s = 32;
	while (c <= 57)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(d);
			putchar(s);
		}
		c += 1;
	}
	putchar('\n');
	return (0);
}
