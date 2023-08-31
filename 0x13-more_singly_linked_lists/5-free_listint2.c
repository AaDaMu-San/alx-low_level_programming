#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: ptr to head of list.
 */
void free_listint2(listint_t **head)
{
	listint_t *n;
	listint_t *tmp;

	if (!head)
		return;

	n = *head;
	while (*head)
		while (n)
		{
			tmp = n;
			n = n->next;
			free(tmp);
			*head = NULL;
		}
}
