#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for upper case characters
 * 
 * Return: 1 (if uppercase) else 0 (if lowercase)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
