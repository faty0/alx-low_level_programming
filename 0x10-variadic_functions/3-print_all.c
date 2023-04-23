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
	char d = (char) va_arg(arg, int);

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
	int i, j, l;
	va_list ap, ap_copy;

	i = l = 0;
	va_start(ap, format);
	va_copy(ap_copy, ap);
	while(format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			l++;
			break;
		case 's':
			l++;
			break;
		case 'i':
			l++;
			break;
		case 'f':
			l++;
			break;
		default:
			i++;
			continue;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			print_char(ap);
			j++;
			break;
		case 's':
			print_string(ap);
			j++;
			break;
		case 'i':
			print_integer(ap);
			j++;
			break;
		case 'f':
			print_float(ap);
			j++;
			break;
		default:
			i++;
			continue;
		}
		if (j != l)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
