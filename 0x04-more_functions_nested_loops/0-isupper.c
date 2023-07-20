#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for upper case characters
 * 
 * Return: 1 (if uppercase) else 0 (if lowercase)
 */
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (0);
	}
	return (1);
}
