#include "function_pointers.h"
/**
 * array_iterator - Function that execute function given
 * @array: pointer array of numbers
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
