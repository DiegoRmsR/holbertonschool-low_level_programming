#include "holberton.h"
/**
 * times_table - Table of 1 until 9
 *
 *
 * Return: any
 */
void times_table(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (i * a < 10)
			{
				if (a != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
				}
				_putchar ((i * a) % 10 + '0');
			}
			else
			{
				_putchar (44);
				_putchar (32);
				_putchar ((i * a) / 10 + '0');
				_putchar ((i * a) % 10 + '0');
			}
		}
		_putchar(10);
	}
}
