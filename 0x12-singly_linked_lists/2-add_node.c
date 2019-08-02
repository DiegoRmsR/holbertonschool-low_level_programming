#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: ...
 * @str: string
 *
 * Return: the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));

	if (!new)	
		return (NULL);
	if (str == NULL)
	{
		new->str=strdup("nill");
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		for (i = 0; str[i] != )
			if (str[i] == NULL)
	}
		
}

