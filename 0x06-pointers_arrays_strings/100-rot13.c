#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: input
 * Return: encoded string using rot13.
 */
char *rot13(char *s)
{
	int i, j;
	char data[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
