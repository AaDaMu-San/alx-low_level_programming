#include "lists.h"

/**
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	while (head && head->next < head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		n++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		n++;
		printf("-> [%p} %d\n", (void *) head->next, head->next->n);
	}
	return (n);
}
