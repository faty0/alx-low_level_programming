#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1
 * @n: number to process
 * @index:  the index of the bit to set
 *
 * Return: on success (1)
 * on faillure (0)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(*n) * 8;
	unsigned int mask = 1;

	if (index <= (bits - 1))
	{
		mask <<= index;
		*n = mask | *n;
		return (1);
	}
	return (0);
}
