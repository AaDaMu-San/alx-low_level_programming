#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: array of ptrs of ints.
 * @size: array size.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int n = 0;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			(i == j) ? s1 += a[n] : 0;
			(i + j == size - 1) ? s2 += a[n] : 0;
			n++;
		}
	}
	printf("%d, %d\n", s1, s2);
}
