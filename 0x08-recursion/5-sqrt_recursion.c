#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number using
 * recursion.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root, or -1 if there is no natural square root.
 */
int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - Recurses to find the natural square root of a
 * number.
 * @n: The number to calculate the square root of.
 * @i: The iterator.
 *
 * Return: The resulting square root, or -1 if there is no natural square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
