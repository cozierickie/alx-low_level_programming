#include "main.h"
/**
 * _pow - Calculates the result of base raised to the power.
 * @base: The base of the exponent.
 * @power: The power of the exponent.
 *
 * Return: Returns the value of (base ^ power).
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
