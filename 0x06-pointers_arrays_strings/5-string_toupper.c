#include "main.h"
/**
 * *string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 * @n: input character.
 * Return: Return the original character if
 * it's not a lowercase letter.
 */
char *string_toupper(char *n)
{
	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			return (n - ('a' - 'A'));
		}
		n++;
	}
	return (0);
}
