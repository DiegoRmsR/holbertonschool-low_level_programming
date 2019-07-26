#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	unsigned int num;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(list, unsigned int);
			if (i < n - 1)
			{
				printf("%d%s", num, separator);
			}
			else
			{
				printf("%d\n", num);
			}
		}
		va_end(list);
	}
}
