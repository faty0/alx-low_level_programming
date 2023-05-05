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
	int c = 0;
	
	n = n ^ m;
	while (n)
	{
		if (n & 1)
			c++;
		n >>= 1;
	}
	return (c);
}
