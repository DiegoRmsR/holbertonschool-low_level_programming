#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}

/**
 * comparator - compares each character of the string.
 * @s: pointer string
 * @c1: normal
 * @c2: rev
 * Return: comparator
 */
int comparator(char *s, int c1, int c2)
{
	if (*(s + c1) == *(s + c2))
	{
		if (c1 == c2 || c1 == c2 + 1)
		{
			return (1);
		}
		return (0 + comparator(s, c1 + 1, c2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: pointer string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen(s) - 1));
}
