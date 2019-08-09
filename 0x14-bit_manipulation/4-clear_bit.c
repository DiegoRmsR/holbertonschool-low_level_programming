#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at
 * a given index.
 * @n: pointer of numbers
 * @index: index posirion
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;
	unsigned int comv;

	if (index > 63)
		return (-1);
	num <<= index;
	comv = ~num;
	*n = *n & comv;
	return (1);
}
