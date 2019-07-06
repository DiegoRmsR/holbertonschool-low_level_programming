#include "holberton.h"
/**
 * rot13 - Function that encode a string using rot13
 * @n: String to be encoded
 * Return: n value
 */
char *rot13(char *n)
{
	int i, j;

	char alfabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; alfabet[j] != '\0'; j++)
		{
			if (n[i] == alfabet[j])
			{
				n[i] = rot13[j];
				break;
			}
		}
	}

	return (n);
}
