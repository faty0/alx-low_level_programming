#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 * factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i, j, lpf;
	int pf;

	pf = 0;
	for (i = 1; i <= 612852475143; i++)
	{
		if (612852475143 % i == 0)
		{
			for (j = 1; j <= 612852475143; j++)
			{
				if (i % j == 0)
				{
					pf++;
				}
			}
			if (pf < 2)
				lpf = i;
		}
		pf = 0;
	}
	printf("%ld\n", lpf);
	return (0);
}

