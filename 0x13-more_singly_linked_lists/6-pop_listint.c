#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: double pointer head
 *
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int numt = 0;

	if (*head == NULL)
		return (0);

	numt = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	(*head) = tmp;
	return (numt);
}
