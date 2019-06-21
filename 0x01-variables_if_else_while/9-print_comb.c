#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int gg;

	for (gg = 48; gg <= 57; gg++)
{

	putchar (gg);
	if (gg != 57)
{
	putchar (44);
	putchar (32);
}
}

	putchar ('\n');
	return (0);
}
