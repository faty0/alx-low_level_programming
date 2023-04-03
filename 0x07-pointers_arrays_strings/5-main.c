#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f = "hellow";
    char *t;

    t = _strstr(s, f);
	if (t != 0)
    	printf("%s\n", t);
	else
    	printf("nuuuuuull\n");
    return (0);
}