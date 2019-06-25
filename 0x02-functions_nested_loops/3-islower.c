#include "holberton.h"

/**
 * _islower - checks a lowercase character
 * @c: variable
 * Return: 1 success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
