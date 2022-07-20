#include "lists.h"

/**
 * free_listint2 - Frees list and set head to NULL
 * @head: head
 * Return: void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmpl;

	if (head != NULL)
	{
		current = *head;
		while ((tmpl = current) != NULL)
		{
			current = current->next;
			free(tmpl);
		}
		*head = NULL;
	}
}
