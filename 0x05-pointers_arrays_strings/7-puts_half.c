#include "holberton.h"
/**
 * puts_half - print half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int count = 0, print;

	while (*(str + count))
		count++;
	if ((count % 2) == 0)
	{
		print = count / 2;
	}
	else
	{
		print = (count + 1) / 2;
	}
	while (*(str + print))
	{
		_putchar(str[print]);
		print++;
	}
	_putchar('\n');
}
