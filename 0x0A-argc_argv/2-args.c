#include "main.h"
#include <stdio.h>
/**
 * main - Print all arguments it receives
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings (Arguments)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
