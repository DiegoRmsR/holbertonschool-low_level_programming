#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @src: string
 * @dest: string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
  {
    dest[i + 6] = src[i];
  }
	dest[i] = 0;
	return (dest);
}
