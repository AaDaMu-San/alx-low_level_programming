#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: ptr to head of list.
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int j;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	j = tmp->n;
	free(tmp);
	return (j);
}
