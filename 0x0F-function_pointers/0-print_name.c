#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - pointer of name
 * @name: pointer of name print take name
 * @f: pointer of funcion
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
	return;
}
