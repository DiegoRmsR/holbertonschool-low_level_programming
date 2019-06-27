#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 3;
	int a = 0;

	do {
		if ((i % 3 == 0) || (i % 5 == 0))
			a = a + i;

		i++;
	} while (i < 1024);

	printf("%i\n", a);
	return (0);
}
