#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
