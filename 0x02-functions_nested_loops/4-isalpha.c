#include "main.h"
/**
 * _isalpha - Check is the character is an alphabet character
 * @c: is the input to test.
 *
 * Return: 1 (true) else 0 (false)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c>= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
