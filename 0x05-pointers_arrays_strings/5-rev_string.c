#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: str pointer to be reversed.
 */
void rev_string(char *s)
{
	char p;
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
		n++;
	for (--n; n > i; n--)
	{
		p = s[i];
		s[i] = s[n];
		s[n] = p;
		i++;
	}
}
