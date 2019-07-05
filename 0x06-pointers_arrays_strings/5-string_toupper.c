#include "holberton.h"
/**
 * string_toupper - lowercase to uppercase
 * @i: string
 * Return: i
 */
char *string_toupper(char *i)
{
	int c;

	for (c = 0; i[c] != '\0'; c++)
	{
		if (i[c] >= 'a' && i[c] <= 'z')
			i[c] -= ' ';
	}
	return (i);
}
