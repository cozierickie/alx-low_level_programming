#include "main.h"
/**
 * _abs - Computes the absolute value of an intergal
 * @n: The number to compute ahe absolute value of
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
