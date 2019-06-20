#include <stdlib.h>
#include <time.h>
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

	for (gg = 'a'; gg <= 'z' ; gg++)
	{
	if (gg != 'q' && gg != 'e')
	{
		putchar (gg);
}
}
	putchar ('\n');
	return (0);
}
