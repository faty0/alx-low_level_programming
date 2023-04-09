#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer
*/
int _atoi(char *s)
{
	int i, j, count, start, tens, integerr;
	char signn;

	i = integerr = 0;
	count = tens = 1;
	start = -1;
	signn = '+';
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				signn = '-';
			if (count == 1)
				start = i;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				count++;
			else
			{
				if (s[i + 1] != '\0')
					signn = '+';
				break;
			}
		}
		i++;
	}
	if (start != -1)
	{
		for (j = (start + count - 1); j >= start; j--)
		{
			integerr += ((s[j] - 48) * tens);
			tens *= 10;
		}
	}
	if (signn != '+')
		integerr = -integerr;
	return (integerr);
}
