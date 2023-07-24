#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: int to be swapped.
 * @b: int to be swapped.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
