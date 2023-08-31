#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: ptr to head of list.
 */
void free_listint(listint_t *head)
{
	listint_t *n = head;
	listint_t *tmp;

	while (n != NULL)
	{
		tmp = n;
		n = n->next;
		free(tmp);
		head = NULL;
	}
}
