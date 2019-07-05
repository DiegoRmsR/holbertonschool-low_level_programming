#include "holberton.h"
/**
 * cap_string - Function that capitalizes all words of string
 * @c: string to be capitalized
 * Return: c string 
 */
char *cap_string(char *n)
{
	int i, c;
	char s[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (c = 0; c < 13; c++)
		{
			if ((n[i] == s[c]) && n[i + 1] >= 'a' && n[i +1] <= 'z')
			n[i + 1] -= 32;

			if (n[0] >= 'a' && n[0] <= 'z')
			n[0] -= 32;
		}
	}
	return (n);
}
