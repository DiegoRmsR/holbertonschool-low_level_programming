#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dx, xd;

	for (dx = 'a'; dx <= 'z' ; dx++)
		putchar (dx);
	for (xd = 'A'; xd <= 'Z'; xd++)
		putchar (xd);
	putchar ('\n');
	return (0);
}
