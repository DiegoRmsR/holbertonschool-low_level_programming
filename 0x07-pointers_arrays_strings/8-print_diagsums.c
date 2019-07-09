#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer.
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, suma1 = 0, suma2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			suma1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			suma2 += *(a + i);
	}
	printf("%d, %d\n", suma1, suma2);
}
