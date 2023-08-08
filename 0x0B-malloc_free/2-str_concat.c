#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings;
 * @s1: string input to join with s2.
 * @s2: string input to join with s1.
 * Return: One str consisting of s1 followed by s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *out = NULL;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	out = malloc((i + j + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		out[k] = s1[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		out[i] = s2[k];
		i++;
	}
	out[i] = '\0';
	return (out);
}
