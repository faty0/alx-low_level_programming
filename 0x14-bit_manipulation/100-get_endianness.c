#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian
 * 1 for litle endian
*/
int get_endianness(void)
{
	unsigned int x = 0x01234567;
	unsigned char *p = (unsigned char *)&x;

	if (*p == 0x01)
	{
		return (0);
		}
	else
	{
		return (1);
	}
}
