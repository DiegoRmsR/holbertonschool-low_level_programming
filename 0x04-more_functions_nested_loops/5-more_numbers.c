#include "holberton.h"
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
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
