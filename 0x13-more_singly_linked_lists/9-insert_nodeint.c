#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: ptr to head of list.
 * @idx: index position.
 * @n: int data.
 * Return: addr of new elemnt.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *now;
	listint_t *new;

	while (*head)
	{
		new = malloc(sizeof(listint_t));
		now = *head;
		new->n = n;

		if (idx == 0)
		{
			new->next = NULL;
			return (new);
		}

		while (now->next != NULL && idx - 1 > 0)
		{
			now = now->next;
			idx--;
		}

		if (now->next == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = now->next;
		now->next = new;
		return (new);
	}
	return (NULL);
}
