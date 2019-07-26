#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: separator to print between numbers
 * @n: size of string
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *strings;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			strings = va_arg(list, char*);
			if (strings == NULL)
			{
				printf("(nil)");
			}

			printf("%s", strings);

			if (i < n - 1 && separator)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(list);
	}
}
