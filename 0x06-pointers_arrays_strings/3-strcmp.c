#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: compare
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
