#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: head pointer
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t nelem;

	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
