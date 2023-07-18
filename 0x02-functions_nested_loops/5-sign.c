#include "main.h"
/**
 * print_sign - outputs the sign of an input
 * @n: is the input
 *
 * Return: 1 (positive) else 0 (zero) else -1 (negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else 
	{
		return (0);
		_putchar('0');
	}
}
