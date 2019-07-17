#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: pointer string
 * @s2: pointer string
 * Return: NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int size1;
	int size2;
	int i;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	for (size1 = 0; s1[size1] != 0; size1++)
	{
		;
	}
	for (size2 = 0; s2[size2] != 0; size2++)
	{
		;
	}

	concat = malloc(sizeof(char) * size1 + size2);

	if (!concat)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		*(concat + i + size1) = s2[i];
	}
	return (concat);
}
