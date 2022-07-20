#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevs;
	listint_t *next;

	prevs = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevs != NULL; i++)
		{
			prevs = prevs->next;
		}
	}

	if (prevs == NULL || (prevs->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prevs->next;

	if (index != 0)
	{
		prevs->next = next->next;
		free(next);
	}
	else
	{
		free(prevs);
		*head = next;
	}

	return (1);
}
