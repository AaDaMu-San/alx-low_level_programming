#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array to search in.
 * @size: num of elemnts in array.
 * @cmp: ptr to func to compare vals.
 * Return: index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (size--)
		if (cmp(array[i - size]))
			return (i - size);
	return (-1);
}
