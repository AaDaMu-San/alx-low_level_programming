#include "main.h"
/**
 * print_square - prints a square.
 * @size: is the size of the square.
 */
void print_square(int size)
{
	int side, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (side = 0; side < size; side++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
