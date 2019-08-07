#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a linked list.
 * @head: pointer head
 *
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
