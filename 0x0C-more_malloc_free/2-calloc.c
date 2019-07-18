#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: char
 * @size: size of string
 * Return: Null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int count;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	i = malloc(nmemb * size);

	if (!i)
	{
		return (NULL);
	}
	for (count = 0; count < (nmemb * size); count++)
	{
		i[count] = 0;
	}
	return (i);
}
