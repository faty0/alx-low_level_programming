#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Succeed)
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);
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
