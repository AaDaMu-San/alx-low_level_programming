#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first str.
 * @s2: second str.
 * @n: first n bytes of s2.
 * Return: ptr to new str.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, i = 0, j = 0;
	char *out = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		j = n;
	out = malloc((i + j + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		out[k] = s1[k];
	i = k;
	for (k = 0; k < j; k++, i++)
		out[i] = s2[k];
	out[i] = '\0';
	return (out);
}
