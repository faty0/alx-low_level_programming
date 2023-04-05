#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate its factorial
 *
 * Return: -1 (the number is negative)
 * 1 (the number is equl to zero)
 * factorial (the number is greater than 0)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
