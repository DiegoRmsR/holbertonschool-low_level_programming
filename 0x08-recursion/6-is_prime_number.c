#include "holberton.h"

/**
 * _prime - Function that check if is prime or not
 * @j: Number tu be valued
 * @i: value increment
 * Return: 1 if is prime or 0 otherwise
 */
int _prime(int i, int j)
{
	if (j % i == 0 && i < j)
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	else
	{
		return (_prime(i + 1, j));
	}
}

/**
 * is_prime_number - Function that return if the input is prime number
 * @n: Number to be valued
 * Return: Return 1 if is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(2, n));
	}
}
