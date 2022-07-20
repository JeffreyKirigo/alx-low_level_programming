#include "lists.h"

/**
 * free_listint - free a list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
