#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary str.
 * Return: result numb
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, pow = 0, tot = 0, i;

	if (!b)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; pow++, i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			tot += 1 << (pow);
	}
	return (tot);
}
