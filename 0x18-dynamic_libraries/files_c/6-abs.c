#include "holberton.h"

/**
 * _abs - prints numbers abs
 * @i: variable
 * Return: print i
 */
int _abs(int i)
{
	if (i >= 0)
	{
		i = i * 1;
	}
	else
	{
		i = i * -1;
	}
	return (i);
}
