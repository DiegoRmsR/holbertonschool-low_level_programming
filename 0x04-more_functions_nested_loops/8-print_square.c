#include "holberton.h"
/**
 * print_square -  prints a square
 * @size: variable
*/
void print_square(int size)
{
	int i, d;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
