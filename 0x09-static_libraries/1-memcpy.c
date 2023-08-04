#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: dest mem area.
 * @src: source mem area.
 * @n: num of bytes to cpy.
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
