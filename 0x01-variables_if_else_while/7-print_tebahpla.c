#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char gg;
	for (gg = 'z'; gg >= 'a'; gg--)
		putchar(gg);
	putchar('\n');
	return (0);
}
