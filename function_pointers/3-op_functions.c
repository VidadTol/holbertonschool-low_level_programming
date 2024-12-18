#include "3-calc.h"

/**
 * op_add - return the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the substraction of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the quotient of a and b
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
 * op_mod - return the remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder of ths division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
