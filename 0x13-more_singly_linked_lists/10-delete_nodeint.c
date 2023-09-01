#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: ptr to head of list.
 * @index: index.
 * Return: 1 success -1 fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *nxt;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	nxt = tmp->next->next;
	free(tmp->next);
	tmp->next = nxt;
	return (1);
}
