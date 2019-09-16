#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
