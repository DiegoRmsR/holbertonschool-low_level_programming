#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: pointer array of numbers
 * @size: size of array
 * @cmp: pointer to the funtion
 *
 *Return: Null
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
			{
				return (i);
			}
		}
		if (size <= 0 || i == size)
			return (-1);
	}
	return (0);
}
