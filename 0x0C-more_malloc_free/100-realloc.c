#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: element count
 * @old_size: elemen size.
 * @new_size: new elemnt size.
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *out;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	out = malloc(new_size);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		*(out + (i * new_size)) = 0;
	return (out);
}
