#include "3-calc.h"

/**
 * get_op_func - check if the absolute value of a number is 98
 * @s: the integer to check
 *
 * Return: 0 if false, something else oth
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
