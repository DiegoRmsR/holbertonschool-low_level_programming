#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer string
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] == 0)
		{
			;
		}
	}
	return(0);
}