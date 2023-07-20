#include "main.h"
/**
 * more_numbers - prints nums from 0-14 10 times
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
