#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: head
 * @n: data to add at new node
 * Return: the address of the new element,
 * or NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		tmp = *head;

		if (*head == NULL)
			*head = new;
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
		}
		return (*head);
	}
	else
		return (NULL);
}
