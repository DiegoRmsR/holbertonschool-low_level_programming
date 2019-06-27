i#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i = 0;
	long first = 0;
	long secund = 1;
	long l = 1;


	do {
		if (l % 2 == 0)
			i = i + l;
/*		printf("%li (%li), ", l, i);*/
		first = secund;
		secund = l;
		l = first + secund;

	} while (l < 4000001);

	printf("%li\n", i);

	return (0);
}
