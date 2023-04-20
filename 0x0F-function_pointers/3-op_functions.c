#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 * 
 * Note: If b is 0, this function returns 0.
 */
int op_div(int a, int b)
{
	if (b == 0) {
		printf("Error: Cannot divide by zero\n");
		return 0;
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 * 
 * Note: If b is 0, this function returns 0.
 */
int op_mod(int a, int b)
{
	if (b == 0) {
		printf("Error: Cannot modulo by zero\n");
		return 0;
	}
	return (a % b);
}
