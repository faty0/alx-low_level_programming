#include "main.h"
/**
 * _getlen - calculate length of a string
 * @s: the string to perfom calculation on
 * @start: starting point of calculation
 *
 * Return: length of the string
*/
int _getlen(char *s, int start)
{
	if (*s != '\0')
		return (_getlen(s + 1, start + 1));
	return (start);
}
/**
 * _cmp_palindrome - compare the first and the last cahracter
 * @s: pointer to first character
 * @k: index of last character
 *
 * Return: 1 if last & first are same
 * 0 if they are not
*/
int _cmp_palindrome(char *s, int k)
{
	if (*s != *(s + k))
		return (0);
	if (k > 0)
		return (_cmp_palindrome(s + 1, k - 2));
	return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 in Success
 * 0 if not
*/
int is_palindrome(char *s)
{
	char *ss = s;

	return (_cmp_palindrome(s, (_getlen(ss, 0) - 1)));
}
