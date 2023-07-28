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
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - ('a' - 'A');
		}
		i++;
	}
	return (n);
}
