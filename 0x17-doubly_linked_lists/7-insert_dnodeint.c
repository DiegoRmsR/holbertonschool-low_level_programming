#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of list
 * @idx:  index of the list where the new node should be added
 * @n: num of nodos
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;
	while (tmp != NULL)
	{
		if (i == idx - 1)
			break;
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
