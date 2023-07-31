#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: str to search.
 * @accept: str with wanted bytes.
 * Return: pointer to the wanted byte, or 0 if no byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	return (0);
}
