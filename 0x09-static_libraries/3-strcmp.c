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
	while (*s1)
	{
		if (*s1 != *s2)
			break;

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
