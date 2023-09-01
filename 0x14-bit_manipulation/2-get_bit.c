#include "main.h"

/**
 * get_bit - function that returns the value of a
 * bit at a given index.
 * @n: input num
 * @index: index
 * Return: val of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
