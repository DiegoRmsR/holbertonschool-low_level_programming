#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: double pointer head
 * @n: numbers
 *
 * Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	tmp = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (*head);
}
