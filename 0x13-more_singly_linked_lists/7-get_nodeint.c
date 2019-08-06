#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer head
 * @index: index of the node
 *
 * Return: listint
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = head;
	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			tmp = tmp->next;
		}
	}
	return (tmp);
}
