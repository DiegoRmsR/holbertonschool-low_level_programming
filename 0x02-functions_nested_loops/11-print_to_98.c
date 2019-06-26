#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 *
 * @i: any number
 */
void print_to_98(int i)
{
	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}
	while (i > 98)
	{
		printf("%d, ", i);
		i--;
	}
	if (i == 98)
	{
		printf("%d\n", i);
	}

}
