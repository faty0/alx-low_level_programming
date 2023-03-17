#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Retur: Always 0 (Succeed)
 */

int main(void)
{
	int n;
	int i;
	float a;
	int j;
	char l;
	int convertedLastdigit;
	char stringg[10];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = 1;
	a = n;
	while (a > 10)
	{
		a = a / 10;
		i++;
	}
	sprintf(stringg, "%d\n", n);
	j = i - 1;
	l = stringg[j];
	convertedLastdigit = l - '0';
	if (convertedLastdigit > 5)
		printf("Last digit of %d is %c and it is greater than 5\n", n, l);
	else if (convertedLastdigit == 0)
		printf("Last digit of %d is %c and is 0\n", n, l);
	else
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
