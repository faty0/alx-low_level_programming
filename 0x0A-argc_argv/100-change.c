#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings (Arguments)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int coins = 0, integ;

	if (argc == 2)
	{
		integ = atoi(argv[1]);
		while (integ > 0)
		{
			if (integ >= 25)
				integ -= 25;
			else if (integ >= 10)
				integ -= 10;
			else if (integ >= 5)
				integ -= 5;
			else if (integ >= 2)
				integ -= 2;
			else
				integ -= 1;
			coins++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
