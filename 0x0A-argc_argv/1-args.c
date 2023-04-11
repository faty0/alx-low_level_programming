#include "main.h"
#include <stdio.h>
/**
 * main - Print number of arguments passed into it
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings (Arguments)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
