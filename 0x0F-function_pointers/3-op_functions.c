#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - Add 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the two integers
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substract 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: substraction of the two integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication of the two integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divise 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Rest of divising of the two integers
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - The remainder of division 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Remainder of divising of the two integers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
