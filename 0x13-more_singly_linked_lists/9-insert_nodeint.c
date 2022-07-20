#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nlist node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the nlist node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the nlist node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nlist;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	nlist = malloc(sizeof(listint_t));
	if (nlist == NULL)
		return (NULL);

	nlist->n = n;

	if (idx == 0)
	{
		nlist->next = *head;
		*head = nlist;
	}
	else
	{
		nlist->next = h->next;
		h->next = nlist;
	}

	return (nlist);
}
