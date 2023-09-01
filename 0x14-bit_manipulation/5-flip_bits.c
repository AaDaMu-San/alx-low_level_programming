#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: input.
 * @m: target
 * Return: needed bits count to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, c = 0;

	while (i < 64)
	{
		if ((n & 1) != (m & 1))
			c++;
		m = m >> 1;
		n = n >> 1;
		i++;

	}
	return (c);
}
