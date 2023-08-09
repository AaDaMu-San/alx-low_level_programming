#include "main.h"
#include <stdlib.h>


int wrd_cnt(char *s)
{
	int f = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}


/**
 * strtow - function that splits a string into words.
 * @str: input str.
 * Return: ptr to arr of strs.
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int i, j = 0, len = 0, word, c = 0, strt, end;

	while (*(str + len))
		len++;

	word = wrd_cnt(str);

	if (word == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (word + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < end)
					*tmp++ = str[strt++];
				*tmp = '\0';
				mat[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			strt = i;
	}
	mat[j] = NULL;
	return (mat);
}
