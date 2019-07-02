#include "holberton.h"
/**
 * swap_int - Print the change of int
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
