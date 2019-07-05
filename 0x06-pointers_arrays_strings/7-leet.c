#include "holberton.h"
/**
 * leet - Encode leet
 * @n: String to be encoded
 * Return: n
 */

char *leet(char *n)
{
	int i, c;

	int letras[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int numbers[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if (n[i] == letras[c])
			{
				n[i] = numbers[c];
			}
		}
	}
	return (n);
}
