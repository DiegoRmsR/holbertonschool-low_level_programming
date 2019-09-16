#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @src: string
 * @dest: string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (c = 0; src[c] != '\0'; i++, c++)
	{
		dest[i] = src[c];
	}
	dest[i] = 0;
	return (dest);
}
