#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: str to be duplicated.
 * Return: duplicated str.
 */
char *_strdup(char *str)
{
	char *out = NULL;
	unsigned int i, s = 0;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
		s++;
	out = malloc((s + 1) * sizeof(char));

	if (out == NULL)
		return (NULL);
	for (i = 0; i <= s; i++)
		out[i] = str[i];
	return (out);
}
