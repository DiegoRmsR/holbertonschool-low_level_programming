#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in order
 *
 */
void print_alphabet_x10(void)
{
int i, a;
	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
