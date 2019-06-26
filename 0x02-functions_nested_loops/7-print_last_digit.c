#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: variable
 * Return: last digit.
 *
 */
int print_last_digit(int i)
{

	/* local variable declaration */
	int c;

	c = i % 10;

	if (i >= 0)
		{
		_putchar(c + '0');
		}
	else
		{
		c = c * -1;
		_putchar(c + '0');
		}

	return (c);
}
