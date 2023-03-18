#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		c += 1;
	}
	c = 97;
	while (c <= 102)
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
