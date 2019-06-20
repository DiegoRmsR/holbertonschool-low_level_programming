#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char eo;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (eo = 'A' ; eo <= 'Z' ; eo++)
		putchar(eo);
        putchar('\n');
	return (0);
}

