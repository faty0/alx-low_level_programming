#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: the number of elements of the array
 *
*/
void reverse_array(int *a, int n)
{
	int temp, i, half;

	if (n % 2 != 0)
		half = n / 2;
	else
		half = (n / 2) - 1;
	for (i = 0; i <= half; i++)
	{
		temp = a[i];
		*(a + i) = a[n - (i + 1)];
		*(a + (n - (i + 1))) = temp;
	}
}
