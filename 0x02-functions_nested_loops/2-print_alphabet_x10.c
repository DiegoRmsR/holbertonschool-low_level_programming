#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
int i, a;
	for (i = 'a'; i <= 'z'; i++)
	{
		for (a = 0; a <= 10; a++)
			_putchar(i);
		_putchar('\n');
	}
}
