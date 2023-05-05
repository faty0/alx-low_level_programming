#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second mumber
 *
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0, mask = 1, bits = sizeof(n) * 8;

	mask <<= (bits - 1);
	n = n ^ m;
	while (mask)
	{
		if (n & mask)
			c++;
		mask >>= 1;
	}
	return (c);
}
