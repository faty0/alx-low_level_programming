#include "main.h"
/**
 * _square - calculates the natural square root
 * @nu: the number
 * @r: the number to start calculation with
 *
 * Return: the square root
 * if not found, return -1
*/
int _square(int nu, int r)
{
	if ((r * r) == nu)
		return (r);
	if (r >= 0)
		return (_square(nu, (r - 1)));
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find its square root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (_square(n, (n / 2)));
}
