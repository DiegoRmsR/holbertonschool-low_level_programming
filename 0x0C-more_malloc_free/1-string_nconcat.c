#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Print the concatenation
 * @s1: Pointer string one
 * @s2: Pointer string n bytes
 * @n: size of second string
 * Return: Pointer to pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2;
	char *concat;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	concat = malloc(sizeof(char) * (size1 + n + 1));

	if (!concat)
		return (NULL);
	for (size2 = 0; size2 < size1; size2++)
		concat[size2] = s1[size2];
	for (size2 = 0; size2 < n; size2++)
		concat[size2 + size1] = s2[size2];
	concat[size1 + size2] = '\0';
	return (concat);
}
