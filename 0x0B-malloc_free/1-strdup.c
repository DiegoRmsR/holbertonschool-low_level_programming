#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: pointer char
 * Return: NULL
*/
char *_strdup(char *str)
{
	char *i;
	int j;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		;
	}

	++count;

	i  = malloc(sizeof(char) * count);

	if (!i)
	{
		return (NULL);
	}

	for (j = 0; j < str[j]; j++)
	{
		i[j] = str[j];
	}
	return (i);
}
