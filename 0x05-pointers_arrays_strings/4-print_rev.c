#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: input str.
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	i = 0;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
