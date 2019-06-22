#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;
	int e;
	int d = 0;
	int gg = 44;
	int lol = 32;

	for (i = 48; i <= 55; i++)
	{
		for (a = (49 + d); a <= 56; a++)
		{
			for (e = (a + 1); e <= 57; e++)
			{
				putchar(i);
				putchar(a);
				putchar(e);
				if (i == 55 && a == 56 && e == 57)
				{
					putchar('\n');
				}
				putchar(gg);
				putchar(lol);
			}
		}
		d++;
	}
	return (0);
}
