#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * arg_count - Counts arguments using format string
 * @format: the format string
 *
 * Return: the arguments count
*/
int arg_count(const char * const format)
{
	int l, i;

	i = l = 0;
	while (format[i] != '\0')
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
	return (l);
}
/**
 * print_all - Prints anything
 * @format: The format of what to print
*/
void print_all(const char * const format, ...)
{
	int i, j, l;
	float d;
	char c;
	char *temp;
	va_list ap;

	i = j = 0;
	va_start(ap, format);
	l = arg_count(format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			c = (char) va_arg(ap, int);
			printf("%c", c);
			j++;
			break;
		case 's':
			temp = va_arg(ap, char *);
			if (temp == NULL)
			{
				printf("(nil)");
				j++;
				break;
			}
			printf("%s", temp);
			j++;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			j++;
			break;
		case 'f':
			d = (float) va_arg(ap, double);
			printf("%f", d);
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
