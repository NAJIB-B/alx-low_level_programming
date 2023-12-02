#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: return result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtractes two numbers
 * @a: first number
 * @b: second number
 *
 * Return: return result of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: return result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of division
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
  * op_mod - modulus of two numbers
  * @a: first number
  * @b: second number
  *
  * Return: result of modulus
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
