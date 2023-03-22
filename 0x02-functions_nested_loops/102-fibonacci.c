#include <stdio.h>
/**
 * main - Entry poit
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int k, l, temp;

	i = 1;
	l = 1;
	k = 2;
	printf("%ld, ", l);
	while (i < 50)
	{
		printf("%ld", k);
		if (i != 49)
			printf(", ");
		temp = l;
		l = k;
		k += temp;
		i++;
	}
	putchar('\n');
	return (0);
}
