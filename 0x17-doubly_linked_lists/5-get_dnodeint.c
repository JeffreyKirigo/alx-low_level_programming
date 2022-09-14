#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a list
 * @head: Head of the linked list
 * @index: node to locate
 *
 * Return: nth node or Null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
