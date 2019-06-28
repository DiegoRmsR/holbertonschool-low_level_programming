#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: variable
*/
void print_triangle(int size)
{
	int i, d, s;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < size; i++)
	{
		s = size - i;
		for (d = 1; d <= size; d++)
		{
			if (d < s)
			_putchar (' ');
		else
			{	
				_putchar ('#');
			}
		}
		_putchar ('\n');
	}
}

