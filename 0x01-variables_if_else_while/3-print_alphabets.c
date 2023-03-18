#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'A';
	while (c <= 'z')
	{
		if (c == '[')
		{
			c += 6;
			putchar('\n');
		} else
		{
			putchar(c);
			c += 1;
		}
	}
	putchar('\n');
	return (0);
}
