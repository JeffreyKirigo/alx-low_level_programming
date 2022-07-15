#include "lists.h"

/**
 * list_len - number of elements in a list
 * @h: pointer to list
 * Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
