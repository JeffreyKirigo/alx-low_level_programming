#include "lists.h"

/**
 * sum_dlistint - Sums up all data in list
 * @head: Head of the d_linked list
 *
 * Return: Sum total of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
