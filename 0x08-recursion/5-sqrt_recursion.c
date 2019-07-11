#include "holberton.h"

/**
 * _sqrt - Function that find power number for square root
 * @i: base of the power
 * @j: exponation of the power
 * Return: Power of the number
 */
int _sqrt(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		i++;
		return (_sqrt(i, j));
	}
}
/**
 * _sqrt_recursion - Function that find power number for square root
 * @n: Number to be valued
 * Return: Power of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(2, n));
	}
}
