#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width val for array.
 * @height: height val for array.
 * Return: 2 dim int array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **mat;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc(height * sizeof(int *));

	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(mat[j]);
			free(mat);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mat[i][j] = 0;
	}
	return (mat);
}
