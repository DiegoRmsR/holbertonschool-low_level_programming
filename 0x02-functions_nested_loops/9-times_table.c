#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, a;

	for (i = '0' + 1 && a = '0' + 1)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				_putchar(i * a);
				_putchar(',')
			}
		}
	}
}
