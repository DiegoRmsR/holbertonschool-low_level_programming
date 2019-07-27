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
	int num;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(list, int);
			printf("%d", num);
			if (i < n - 1 && separator)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(list);
	}
}
