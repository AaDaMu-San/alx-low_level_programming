#include "main.h"

int check(char *s, int i, int len);
int _strlenr(char *s);

/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s:
 * Return: 1 if true, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlenr(s)));
}

/**
 * _strlenr - Returns the len of given str.
 * @s: input str.
 * Return: length of str.
 */
int _strlenr(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlenr(s + 1) + 1);
}

/**
 * check - checks for palindromes recursively.
 * @s: input str.
 * @i: iterator.
 * @len: length of str.
 * Return: 1 if true, 0 if not.
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
