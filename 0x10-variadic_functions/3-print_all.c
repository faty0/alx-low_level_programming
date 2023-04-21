#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_char -
*/
void print_char(void *arg)
{
	char* d = (char*)arg;
	printf("%c", *d);
}
/**
 * print_integer -
*/
void print_integer(void *arg)
{
	int* d = (int*)arg;
	printf("%d", *d);
}
/**
 * print_float -
*/
void print_float(void *arg)
{
	float* d = (float*)arg;
	printf("%f", *d);
}
/**
 * print_string -
*/
void print_string(void *arg)
{
	char* d = (char*)arg;
	printf("%s", d);
}
/**
 * print_all - Prints anything
 * @format: 
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
	char *temp;
	void (*f_ptr)(void*);
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (*(format + i) != '\0')
	{
		j = 0;
		while (tys[j].ty != NULL)
		{
			if (*(format + i) == tys[j].ty)
			{
				f_ptr = tys[j].f;

			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
