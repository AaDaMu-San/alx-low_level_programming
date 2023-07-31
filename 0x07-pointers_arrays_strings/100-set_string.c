#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: ptr to ptr to set 'to'.
 * @to: str to set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
