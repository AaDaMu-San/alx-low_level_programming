#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: Mem area to be filled.
 * @b: Char  to cpy.
 * @n: Num of time char to be copied.
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
