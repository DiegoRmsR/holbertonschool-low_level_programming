#include "holberton.h"
/* #include <stdio.h> */

/**
 * _strstr -  Locates a substring.
 *
 * @haystack: String
 * @needle: Substring
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	/* local variable declaration */
	unsigned int i, j, c;

	c = 0;
	while (*(needle + c) != '\0')
		c++;

	i = 0;
	while (*(haystack + i) != '\0')
		{
		j = 0;
		while (*(needle + j) != '\0')
			{
/*			printf("haystack[%d]=%c needle[%d]=%c\n",i, haystack[i], j, needle[j]);*/
			if (*(needle + j) == *(haystack + i))
				{
				j++;
				i++;
				}
			else
				break;
			if (j == c)
				return (haystack + i - j);
			}
		i++;
		}
	return (0);
}
