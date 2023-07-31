#include "main.h"

/**
 * is_prime_recursion - Recurses to check if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_recursion(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number using recursion.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	return (is_prime_recursion(n, 2));
}

/**
 * is_prime_recursion - Recurses to check if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_recursion(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_recursion(n, i + 1));
}
