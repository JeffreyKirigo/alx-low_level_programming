#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: head
 * Return: the sum of all the data (n) of a listint_t
 *
 */
int sum_listint(listint_t *head)
{
	unsigned int i;
	int sum = 0;

	i = 0;

	for (; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
