#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * checksym - Check if a string contains symbols
 * @str: The string to check
 *
 * Return: 1 if it exists
 * 0 if not
 */
int checksym(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}
/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings (Arguments)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc != 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (checksym(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
