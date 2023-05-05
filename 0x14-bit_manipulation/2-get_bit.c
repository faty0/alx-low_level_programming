#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number to check
 * @index: index f bit
 *
 * Return: the value of the bit at the index
 * on faillure (-1)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;
	unsigned int mask = 1;

	if (index <= (bits - 1))
	{
		mask <<= index;
		if (mask & n)
			return (1);
		else
			return (0);
	}
	return (-1);
}
