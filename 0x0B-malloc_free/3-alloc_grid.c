#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional
 * array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: Pointer to a 2 dimensional array of integers
 * NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **resulted;
	int i, j;

	if (width > 0 && height > 0)
	{
		resulted = (int **)malloc(height * sizeof(int));
		for (i = 0; i < height; i++)
			resulted[i] = (int *)malloc(width * sizeof(int));
		if (resulted != NULL)
		{
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					resulted[i][j] = 0;
				}
			}
			return (resulted);
		}
	}
	return (NULL);
}
