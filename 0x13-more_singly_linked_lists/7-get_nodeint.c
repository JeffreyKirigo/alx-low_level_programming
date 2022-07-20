#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head
 * @index: pos to get node from
 * Return: returns the nth node of a listint_t
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	for (; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
