#include "main.h"
/**
 * checkstring - check if a character exists further
 * @s1: the string to check
 * @s2: starting check point
 *
 * Return: 1 if it exists
 * 0 if not
*/
int checkstring(char *s1, char *s2)
{
	if (*s2 != '\0')
	{
		if (*s1 == *s2)
			return (1);
		else
			return (checkstring(s1, s2 + 1));
	}
	return (0);
}
/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 on Success
 * 0 on Fail
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 != '*')
	{
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else
			return (0);
	}
	else
	{
		if (*s1 == *(s2 + 1) && !(checkstring(s1, s1 + 1)))
			return (wildcmp(s1, s2 + 1));
		if (*(s1 + 1) == '\0' && *(s2 + 1) != '\0')
			return (wildcmp(s1, s2 + 1));
		if (checkstring(s1, s2) && *(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2));
	}
}
