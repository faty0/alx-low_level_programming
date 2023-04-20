#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: the array to process
 * @size: the size of the array
 * @action: Pointer to the function you need to use
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		long unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
