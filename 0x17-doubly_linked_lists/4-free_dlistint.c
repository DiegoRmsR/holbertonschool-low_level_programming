#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: head of tha list to free
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
