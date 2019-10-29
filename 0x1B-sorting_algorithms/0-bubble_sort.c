#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: pointer to elements
 * @size: size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int flag;

	if (!array)
		return;
	while (flag != -1)
	{
		flag = -1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
