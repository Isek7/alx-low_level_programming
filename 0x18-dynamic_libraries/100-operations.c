#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: the quotient of a and b, or 0 if b is zero
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero.\n");
		return (0); /* Handle the division by zero case */
	}
}

/**
 * mod - computes the remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: the remainder of a and b, or 0 if b is zero
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero.\n");
		return (0); /* Handle the modulo by zero case */
	}
}
