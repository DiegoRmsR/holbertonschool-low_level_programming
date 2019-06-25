#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @i: variable
 * Return: print i
 */
int print_last_digit(int i)
{
int c;

	if (i >= 0)
	{
		c = i % 10;
	}
	else
	{
		c = -i % 10;
	}
	_putchar (c + '0');
	return (c);
}
