#include "main.h"
/**
 * reverse_array - function that reverses
 * the content of an array of integers.
 * @a: input
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int j, i;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
