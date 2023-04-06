#include "main.h"
/**
 * _calculate_divisors - check if other divisors exist besides 1
 * @n: the number to check
 * @next: the next number to divise by
 *
 * Return: 1 if no other divisor exists
 * 0 of it exists
*/
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
 * is_prime_number - check if a number is prime number
 * @n: the number
 *
 * Return: 1 if prime
 * 0 if not
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (_calculate_divisors(n, n));
}
