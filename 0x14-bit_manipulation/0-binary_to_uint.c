#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 & 1 chars
 *
 * Return: the converted number
 * 0 on faillure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, c = 0, i = 0, pow = 1, k = 0;

	if (!b)
		return (0);
	while (b[c])
		c++;
	while (b[k])
	{
		c--;
		if (b[k] == '0')
			i += 0;
		else if (b[k] == '1')
		{
			for (j = 1; j <= c; j++)
				pow *= 2;
			i += pow;
			pow = 1;
		}
		else
			return (0);
		k++;
	}
	return (i);
}
