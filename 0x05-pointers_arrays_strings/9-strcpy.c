#include "holberton.h"
/**
 * _strcpy - copies the string pointed
 * @dest: pointer of char
 * @src: pointer of char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
