#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	int n, i, j, c, isNegative;
	float a;
	char l, stringg[10];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = 1;
	a = n;
	isNegative = 0;
	if (n < 0)
	{
		a *= -1;
		isNegative = 1;
	}
	while (a > 10)
	{
		a = a / 10;
		i++;
	}
	sprintf(stringg, "%d\n", n);
	if (isNegative == 1)
	{
		j = i;
		l = stringg[j];
		c = l - '0';
		c *= -1;
	} else
	{
		j = i - 1;
		l = stringg[j];
		c = l - '0';
	}
	if (c > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	else if (c == 0)
		printf("Last digit of %d is %d and is 0\n", n, c);
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	}
	return (0);
}
