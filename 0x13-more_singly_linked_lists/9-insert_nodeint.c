#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 *at a given position
 * @head: double pointer head
 * @idx: index nodos
 * @n: argument struct
 *
 * Return: new nodo
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;

	tmp = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
	}
	if (tmp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
