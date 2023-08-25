#include <stdio.h>

/**
 * b - print from init.
 */
void b(void) __attribute__((constructor));
void b(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
