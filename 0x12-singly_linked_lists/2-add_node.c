#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: crnt plc in list.
 * @str: str to add to the head.
 * Return: ptr t crrent position in list.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *con;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = strlen(str);
	new = *head;
	con = malloc((len + 1) * sizeof(char));

	if (con == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		con[i] = str[i];

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(con);
		return (NULL);
	}

	new->str = con;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
