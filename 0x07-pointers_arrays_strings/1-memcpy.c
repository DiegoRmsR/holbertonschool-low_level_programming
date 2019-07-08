#include "holberton.h"
/**
 * _memcpy - copie memory area.
 * @dest: string
 * @src: string
 * @n: valou
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
