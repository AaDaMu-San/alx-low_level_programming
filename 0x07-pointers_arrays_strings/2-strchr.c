#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: the str to check.
 * @c: char to find.
 * Return: ptr to first char appearance.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
