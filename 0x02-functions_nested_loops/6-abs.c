#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * @c: the number to compute its value
 *
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	return (c);
}
