#include "main.h"
/**
 * print_triangles - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int d, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 1; d <= size; d++)
		{
			for (i = d; i < size; i++)
			{
				_putchar(' ');
			}
			for (i = 1; i <= d; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
