#include "main.h"
/**
 * _puts_recursion - function that prints a string,
 * followed by a new line.
 * @s: input string.
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(&s[i + 1]);
	}
}
