#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: Address of head
 * @n: num of nodos
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
