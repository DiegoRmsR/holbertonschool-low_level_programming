#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node of a dlistint_t linked list.
 * @head: head of list
 * @index: index of the list where the new node should be deleted
 * Return: 1 on success, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index <= 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			return (-1);
		if (i == index)
		{
			tmp->prev->next = tmp->next;
			if (tmp->prev != NULL)
			{
				tmp->next->prev = tmp->prev;
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
