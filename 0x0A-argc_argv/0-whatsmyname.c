#include <stdio.h>
/**
 * main - entry point.
 * @argc: argc
 * @argv: argv
 * Return: 1 success.
 */
int main(int argc, char* argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
