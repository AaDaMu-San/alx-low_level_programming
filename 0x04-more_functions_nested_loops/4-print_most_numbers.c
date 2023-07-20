#include "main.h"
/**
 * print_most_numbers - prints numbers from 0-9 except 2 and 4.
 */
void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9' && i != 2 && i != 4)
	{
		_putchar(i);
	}
	_putchar('\n');
}
