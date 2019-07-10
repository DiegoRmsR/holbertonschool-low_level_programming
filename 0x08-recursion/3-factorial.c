#include "holberton.h"
/**
 * factorial - Function that returns the factorial of a given number
 * @n: Number factrial
 * Return: Factorial of a given number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
