#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - sum operation
 * @a: num1 of shell
 * @b: num2 of shell
¨* Return: Sum
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operation
 * @a: num1 of shell
 * @b: num2 of shell
 * Return: sub
*/

int op_sub(int a, int b)
{
	return (a - b)
}
/**
 * op_mul - multiplication operation
 * @a: num1 of shell
 * @b: num2 of shell
 * Return: Multiplication
*/

int op_mul(int a, int b)
{
	return (a * b)
}
/**
 * op_div - division operation
 * @a: num1 of shell
 * @b: num2 of shell
 * Return:
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - operation module
 * @a: num1 of shell
 * @b: num2 of shell
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
