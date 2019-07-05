#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @src: string
 * @dest: string
 * @n: variable, valor 1
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (c = 0; c < n; i++, c++)
	{
		dest[i] = src[c];
	}
	dest[i] = 0;
	return (dest);
}

