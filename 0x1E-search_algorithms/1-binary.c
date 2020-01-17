#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to compare
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int med = size, left = 0, right = size - 1;

	if (array == NULL && size < 1)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		/* Take the size of each stack of arrays */
		med = ((left + right) / 2);

		/* The medium is equal to value */
		if (array[med] == value)
			return (med);
		/** Not look left way if is smaller than value*/
		if (array[med] < value)
			left = med + 1;
		/* If the med is greater than value */
		else
			right = med - 1;
	}

	return (-1);
}

/**
 * print_array - Print a array
 * @array: Store several numbers
 * @start: Introduction to array
 * @end: Ending of the array
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	while (start <= end)
	{
		if (start == end)
			printf("%d\n", array[start]);
		else
			printf("%d, ", array[start]);
		++start;
	}
}
