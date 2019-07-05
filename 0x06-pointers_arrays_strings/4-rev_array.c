#include "holberton.h"
/**
 * reverse_array - reverse the content of an array
 * @a: pointer, string to reverse
 * @n: variable of the string
*/
void reverse_array(int *a, int n)
{
	int i, c, tmp;

	for (i = 0; i < n; i++)
	{
		for (c = i + 1; c > 0; c--)
		{
			tmp = a[c];
			a[c] = a[c - 1];
			a[c - 1] = tmp;
		}
	}
}
