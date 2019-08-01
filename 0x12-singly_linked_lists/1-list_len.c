#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer head
 *
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t nuelem = 0;

	while (h != NULL)
	{
		nuelem++;
		h = h->next;
	}
	return (nuelem);
}
