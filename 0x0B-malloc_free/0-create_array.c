#include "holberton.h"
#include "stdlib.h"

/**
 * create_array - Print the char array
 * @size: Store the size
 * @c: Store char
 * Return: Ptr char
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	i = malloc(sizeof(char) * size);

	if (!i)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
