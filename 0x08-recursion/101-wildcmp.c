#include "main.h"
/**
 * wildcmp - function that compares two strings and
 * returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: input str.
 * @s2: input str.
 * Return: 1 if true, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if  (*s2 == '\0' && *s1 == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
