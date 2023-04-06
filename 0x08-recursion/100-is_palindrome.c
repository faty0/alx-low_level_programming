#include "main.h"
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
	int k;

	k = 0;
	while (*(s + k) != '\0')
		k++;
	return (_cmp_palindrome(s, (k - 1)));
}
