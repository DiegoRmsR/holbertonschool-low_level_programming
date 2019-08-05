#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head:
 * @str:
 *
 * Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	size_t i = 0;
	
	tmp = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = NULL;

	return (new);
}
