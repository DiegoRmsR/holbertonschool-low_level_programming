#include "holberton.h"
/**
 * _isdigit - checks digit(0 - 9)
 * @c: variable
 * Return: 1; 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

