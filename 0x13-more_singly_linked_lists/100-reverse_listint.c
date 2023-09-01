#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: ptr to head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = nxt;
	}
	*head = pr;
	return (*head);
}
