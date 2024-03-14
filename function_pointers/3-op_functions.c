#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 * Return: return.
 */

int op_add(int a, int b)
{
	return (a + b);
}




/**
 * op_sub - Substraction of two numbers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 * Return: return.
 */

int op_sub(int a, int b)
{
	return (a - b);
}




/**
 * op_mul - Multiply two numbers.
 *
 * @a: The first numbers.
 * @b: The second numbers.
 *
 * Return: return.
 */

int op_mul(int a, int b)
{
	return (a * b);
}




/**
 * op_div - Divide two numbers.
 *
 * @a: The first numbers.
 * @b: The second numbers.
 *
 * Return: return.
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
 * op_mod - Module 2 two numbers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 * Return: return
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

