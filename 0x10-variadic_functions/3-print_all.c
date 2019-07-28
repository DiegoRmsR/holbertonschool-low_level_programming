#include "variadic_functions.h"

/**
 * print_char - print a char
 * @list: argument
 *
 * Return: void
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_number - print a num integer
 * @list: argument
 *
 * Return: void
 */
void print_number(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * print_float - print a num float
 * @list: argument
 *
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - print a string
 * @list: argument
 *
 * Return: void
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: Pointer to strings
*/
void print_all(const char * const format, ...)
{
	op_t list_op[] = {
		{"c", print_char},
		{"i", print_number},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};


	char *t_form = (char *) format;
	char *separator = "";
	va_list list;
	int i = 0;

	va_start(list, format);

	while (format && *t_form)
	{
		i = 0;

		while (list_op[i].op)
		{
			if (list_op[i].op[0] == *t_form)
			{
				printf("%s", separator);
				list_op[i].f(list);
				separator = ", ";
			}
			i++;
		}

		t_form++;
	}

	va_end(list);
	printf("\n");
}
