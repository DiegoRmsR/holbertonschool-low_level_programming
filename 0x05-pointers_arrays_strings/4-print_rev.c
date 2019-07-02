#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @str: pointer variable
 */
void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
  {
    i /= str;
		_putchar (str[i]);
  }
  _putchar('\n');
}

