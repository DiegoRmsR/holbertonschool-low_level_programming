#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - pointer of name
 * @name: pointer of name printf
 * @f: pointer of funcion
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
