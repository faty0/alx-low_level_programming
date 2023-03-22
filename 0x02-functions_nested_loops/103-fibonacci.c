#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0.
 */
int main(void)
{
	long int k, l, temp, sum;

	l = 1;
	k = 2;
	sum = 0;
	while (k <= 4000000)
	{
		if (k % 2 == 0)
		{
			sum += k;
		}
		temp = l;
		l = k;
		k = k + temp;
	}
	printf("%ld\n", sum);
	return (0);
}
