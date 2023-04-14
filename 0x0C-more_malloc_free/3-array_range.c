#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: First value
 * @max: Last value
 *
 * Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min <= max)
	{
		arr = malloc(sizeof(int) * ((max - min) + 1));
		if (arr != NULL)
		{
			*(arr + 0) = min;
			for (i = 1; i < ((max - min) + 1); i++)
				*(arr + i) = min + i;
			return (arr);
		}
	}
	return (NULL);
}
