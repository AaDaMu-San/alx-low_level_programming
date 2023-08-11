#include "main.h"
#include <stdlib.h>
/*
char *_mems(char *s, char b, unsigned int n);

**
 * _mems - allocates mem and fill it with constant bytes.
 * @s: mem area.
 * @b: char.
 * @n: no of time to cpy b.
 * Return: ptr to s.
 /
char *_mems(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}*/

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: array.
 * @size: size of nmemb.
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *out;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	out = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		 out[i] = 0;
	
	return (out);
}
