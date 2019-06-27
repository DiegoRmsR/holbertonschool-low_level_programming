#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: variable
*/
void print_diagonal(int n)
{
	int i, d;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (d = 0; d < i; d++)
		{
			_putchar (' ');
		}
		_putchar (92);
		_putchar ('\n');
	}
}
