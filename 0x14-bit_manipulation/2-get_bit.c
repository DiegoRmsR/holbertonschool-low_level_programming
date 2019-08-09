#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at
 * a given index.
 * @n: number given
 * @index: number of index 0
 *
 * Return:  the value of the bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
