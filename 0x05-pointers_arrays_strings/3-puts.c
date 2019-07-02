#include "holberton.h"
/**
 * _puts - print a string
 * @s: variable char
 */
void _puts(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
		_putchar(s[i]);
        }

        _putchar ('\n');
}
