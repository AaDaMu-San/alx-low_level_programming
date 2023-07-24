#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: input str.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (--n; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
