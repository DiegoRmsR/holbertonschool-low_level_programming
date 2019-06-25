#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * @i: variable, @a: variable, @b: variable, @c: variable
 * Return:
 */
void jack_bauer(void)
{
int i, a, b, c;
	for (i = 0; i <= 2; i++)
		{
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 5; b++)
			{
				for (c = 0; c <= 9; c++)
				{
					if (!(i == 2 && a > 3))
					{
						_putchar(i + '0');
						_putchar(a + '0');
						_putchar(':');
						_putchar(b + '0');
						_putchar(c + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
