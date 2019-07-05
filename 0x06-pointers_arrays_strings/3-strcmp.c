#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
*/
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while(s1[n] && s2[n])
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (s1[n] - s2[n]);
}
