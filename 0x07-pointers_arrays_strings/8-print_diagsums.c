#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of both diagnals
 * @a: the array
 * @size: the size of array
*/
void print_diagsums(int *a, int size)
{
	int i, j, in;
	int sum1, sum2;

	sum1 = a[0];
	in = 1;
	j = size * size;
	sum2 = a[j - size];
	for (i = 1; i < j; i++)
	{
		if (i % size == 0)
		{
			sum1 += a[i + in];
			sum2 += a[i - in];
			in++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
