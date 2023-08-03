#include "main.h"

int multiples(int n, int i);

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 * @n: input integer.
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (multiples(n, n - 1));
}

/**
 * multiples - looks for multiples of n.
 * @n: base.
 * @i: iterator.
 * Return: 1 if prime, 0 if not.
 */
int multiples(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (multiples(n, i - 1));
}
