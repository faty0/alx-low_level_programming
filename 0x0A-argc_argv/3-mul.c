#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings (Arguments)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
