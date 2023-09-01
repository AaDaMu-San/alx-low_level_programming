#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number.
 * @n: num to print in base 2
 */
void print_binary(unsigned long int n)
{
	int c, k, f = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (c = 63; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
		{
			f = 1;
			putchar('1');
		}
		else if (f == 1)
			putchar('0');
	}
}
