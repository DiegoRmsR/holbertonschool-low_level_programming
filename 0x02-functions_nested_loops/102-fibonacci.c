#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	long firts = 0;
	long secund = 1;
	long l = 1;

	do {
		printf("%li, ", l);
		first = secund;
		secund = l;
		l = firts + secund;
		a++;
	} while (a < 49);

	printf("%li\n", l);

	return (0);
}
