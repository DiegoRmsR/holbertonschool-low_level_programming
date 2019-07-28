#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - struct operators
 * @op: operator
 * @f: function from print
 *
 */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

void print_number(va_list);
void print_string(va_list);
void print_float(va_list);
void print_char(va_list);

#endif  
