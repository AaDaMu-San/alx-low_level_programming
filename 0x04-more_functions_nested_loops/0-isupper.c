#include "main.h"
/**
 * _isupper - checks for upper case characters
 * @c:char to check
 *
 * Return: 1 (if uppercase) else 0 (if lowercase)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
