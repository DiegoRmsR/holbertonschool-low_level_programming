#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: variable bytes
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(sizeof(unsigned int) * b);
	{
		if (!i)
		{
			exit(98);
		}
		free(i);
	}
	return (i);
}
