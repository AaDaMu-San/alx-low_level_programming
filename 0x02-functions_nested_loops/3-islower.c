#include "main.h"
/**
 * _islower - Entry
 * @c: character to test.
 *
 * Return: 1 (true) else 0 (false)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
