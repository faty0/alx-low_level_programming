#include "main.h"
int _calculate_divisors(int n, int next)
{
	if (next > 0)
	{
		if ((n % next == 0) && (next != n) && (next != 1))
			return (0);
		return (_calculate_divisors(n, next - 1));
	}
	return (1);
}
/**
 * is_prime_number
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (_calculate_divisors(n, n));
}
