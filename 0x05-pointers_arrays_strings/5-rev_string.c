#include "holberton.h"

/**
 * rev_string -  reverses a string.
 *
 * @s: string
 * Return: void.
 *
 */
void rev_string(char *s)

{
	/* local variable declaration */
	int i, c, e;
	char v[500];

	i = 0;

	while (s[i] != ('\0'))
	{
	*(v + i) = *(s + i);
	i++;
	}

	e = i - 1;
	for (c = 0 ; c < i ; c++)
	{
	*(s + c) = *(v + e);
	e--;
	}

}
