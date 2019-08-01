#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer to list
 *
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t nuelem;

	while (h != NULL)
	{
		nuelem++;
		h = h->next;
	}
	return (nuelem);
}
