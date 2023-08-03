#include "main.h"

int sqrt_calc(int n, int i);

/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: input number.
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_calc(n, 0));
}

/**
 * sqrt_calc - recurses to find the natural
 * square root of a number
 * @n: input number.
 * @i: iterator.
 * Return: sqrt of n.
 */
int sqrt_calc(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_calc(n, i + 1));
}
