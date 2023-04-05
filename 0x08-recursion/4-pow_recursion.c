#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the exponent
 * @y: the power
 *
 * Return: -1 (the power is less than 0)
 * Otherwise the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
