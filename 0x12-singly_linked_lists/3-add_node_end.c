#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: curent place in list.
 * @str: str to add to.
 * Return: ptr to current pos in list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *now;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	dupstr = strdup(str);
	if (dupstr == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dupstr;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	now = *head;
	while (now->next != NULL)
		now = now->next;
	now->next = new;
	return (*head);
}
