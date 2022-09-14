#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: Head of doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
