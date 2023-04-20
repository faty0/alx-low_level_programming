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
	if (action != NULL && size != 0 && array != NULL)
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
