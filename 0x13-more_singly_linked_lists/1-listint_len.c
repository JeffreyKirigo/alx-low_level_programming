#include "lists.h"

/**
 * listint_len - length of the list
 * @h: head
 * Return: total number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
