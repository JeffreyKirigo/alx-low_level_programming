#include "lists.h"

/**
 * add_nodeint - adds a new element in list
 * @head: head
 * @n: new data to add
 * Return: the address of the new element,
 * or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
		return (NULL);
}
