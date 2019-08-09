#include "holberton.h"

/**
 * flip_bits - unction that returns the number of bits
 * @n: numbers given
 * @m: number of bits you would need
 *
 * Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n = m ^ n;
	while (n != 0)
	{
		if (n & 1)
			count++;

		n = n >> 1;
	}
	return (count);
}
