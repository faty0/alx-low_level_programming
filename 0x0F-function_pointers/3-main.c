#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Write a program that performs simple operations
 * @argc: Number of arguments
 * @argv: Array of pointers to the the arguments
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int n;
	int (*op_func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3])) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	op_func_ptr = get_op_func(argv[2]);
	n = op_func_ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", n);
	return (0);
}
