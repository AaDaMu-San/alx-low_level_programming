#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10x
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{	
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
