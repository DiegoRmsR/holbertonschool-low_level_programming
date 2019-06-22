#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d = 0;
	int e = 44;
	int f = 32;

	for (a = 48; a <= 55; a++)
	{
		for (b = (49 + d); b <= 56; b++)
		{
			for (c = (b + 1); c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
				{
					putchar('\n');
					return (0);
				}
				putchar(e);
				putchar(f);
			}
	d++;
	}
	return (0);
}
