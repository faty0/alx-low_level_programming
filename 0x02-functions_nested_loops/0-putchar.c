#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int i;
	char c[] = "_putchar";

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i += 1;
	}
	_putchar('\n');
	return (0);
}
