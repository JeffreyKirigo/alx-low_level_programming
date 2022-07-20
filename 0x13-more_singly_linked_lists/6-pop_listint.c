#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head
 * Return: the head node’s data (n)
 *
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *hd;
	listint_t *currl;

	if (*head != NULL)
	{
		currl = *head;

		node = currl->n;

		hd = currl->next;

		free(currl);

		*head = hd;
		return (node);
	}
	else
		return (0);
}
