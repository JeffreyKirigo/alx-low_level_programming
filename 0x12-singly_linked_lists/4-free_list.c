#include "lists.h"

/**
 * free_list - frees the list
 * @head: head
 * Return: void
 */
void free_list(list_l *head)
{
	list_l *list;

	while ((list = head) != NULL)
	{
		head  = head->next;
		free(list->str);
		free(list);
	}
}
