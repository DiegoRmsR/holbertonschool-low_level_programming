#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
	{
		return (NULL);
	}
	for (i = 0; p[i] < max; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
