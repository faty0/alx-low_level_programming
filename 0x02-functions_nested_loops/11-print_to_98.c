#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - it print from a @n to 98
 *@n: number to start printing from
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (n <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		putchar('\n');
	}
	if (n > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			i--;
		}
		putchar('\n');
	}
}
