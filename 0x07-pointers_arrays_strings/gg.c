nclude "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: Store the first segment
 * @needle: Store the second segment
 * Return: Pointer to the byte in s.
*/
char *_strstr(char *haystack, char *needle)
{
        int i, j;

        for (i = 0; haystack[i] != '\0'; i++)
        {
                for (j = 0; needle[j] != '\0'; j++)
                {
                        if (haystack[i] == needle[j])
                        {
                                return (needle);
                        }
                }
        }
        return (0);
}

