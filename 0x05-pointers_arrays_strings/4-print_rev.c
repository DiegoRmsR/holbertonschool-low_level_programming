#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer variable
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	while (i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}

