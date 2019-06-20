#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

char s;

	for (d = 'a' ; d <= 'z' ; d++)
		putchar(d);
	for (s = 'A' ; s <= 'Z'; s++)
		putchar(s);
        putchar('\n');
	return (0);
}
