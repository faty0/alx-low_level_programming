#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_char - print a character
 * @arg: the character to print
*/
void print_char(va_list arg)
{
	int d = (char) va_arg(arg, int);

	printf("%c", d);
}
/**
 * print_integer - print an integer
 * @arg: the integer to print
*/
void print_integer(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_float - print a float
 * @arg: the float to print
*/
void print_float(va_list arg)
{
	float d = (float) va_arg(arg, double);

	printf("%f", d);
}
/**
 * print_string - print a string
 * @arg: the string to print
*/
void print_string(va_list arg)
{
	char *temp = va_arg(arg, char *);

	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}
/**
 * print_all - Prints anything
 * @format: The format of what to printt
*/
void print_all(const char * const format, ...)
{
	ty_t tys[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	void (*f_ptr)(va_list arg);
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (tys[j].ty != NULL)
		{
			if (format[i] == *(tys[j].ty))
			{
				f_ptr = tys[j].f;
				f_ptr(ap);
				if (j == 3)
				{
					printf(",");
					printf(" ");
				}
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
