#include "main.h"
/**
 * _puts_recursion - function that prints a string,
 * followed by a new line.
 * @s: input string.
 */
void _puts_recursion(char *s)
{
	int i;

	i=0;
	if (s[i] == '\0')
		return;
	else
	{
		_putchar(&s);
		i++;
	}
}
