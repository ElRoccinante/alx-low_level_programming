/*
 * File: 6-is_prime_number.c
 * Auth: sam tech
 */

#include "main.h"

int is_prime_number(int n);
int is_divisible(int num, int div);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: If the number is a prime number - 1.
 *         If the number is not a prime number - 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_divisible(n, 2));
}

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (div >= num / 2)
		return (1);

	if (num % div == 0)
		return (0);

	return (is_divisible(num, div + 1));
}
