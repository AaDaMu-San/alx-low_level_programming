#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: starting vals.
 * @max: end vals.
 * Return: ptr to new array.
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *out, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	out = malloc(sizeof(int) * s);
	if (out == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		out[j] = i;
	return (out);

}
