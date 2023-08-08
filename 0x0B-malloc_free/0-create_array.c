#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: char to initialize array.
 * Return: pointer (success) NULL (ERROR)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *out = malloc(size * sizeof(char));

	if (size == 0 || out == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		out[i] = c;
	return (out);
}
