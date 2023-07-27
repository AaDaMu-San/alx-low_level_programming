#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: input string.
 * @s2: input  string.
 * Return: return an integer less than, equal to,
 * or greater than zero if s1 (or the first n bytes thereof)
 * is found, respectively, to be less than, to match,
 * or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (1);

		else if (s1[i] < s2[i])
			return (-1);

		else if (s1[i] < s2[i])
			return (1);

		i++;
	}
	return (0);
}
