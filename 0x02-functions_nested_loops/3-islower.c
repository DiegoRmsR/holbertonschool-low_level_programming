#include "holberton.h"

/**
 * _islower - check a lowercase character
 * @c - variable
 * return 1 - if c is lowercase
 * return 0 - otherwise
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
