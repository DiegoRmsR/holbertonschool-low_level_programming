#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: head pointer
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nelem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
