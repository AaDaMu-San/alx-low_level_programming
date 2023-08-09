#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the
 * arguments of your program.
 * @ac: num of strs.
 * @av: strs to be joined.
 * Return: pointer to a new string (Success), NULL (fail).
 */
char *argstostr(int ac, char **av)
{
	int j, i, k = 0;
	char *out = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			k++;

	out = malloc(sizeof(char) * (k + ac + 1));

	if (out == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			out[k] = av[i][j];

		out[k] = '\n';
		k++;
	}
	out[k] = '\0';
	return (out);
}
