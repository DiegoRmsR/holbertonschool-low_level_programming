#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while ((tmp = *head) != NULL)
		{
			(*head) = (*head)->next;
			free(tmp);
		}
		(*head) = NULL;
	}
}
