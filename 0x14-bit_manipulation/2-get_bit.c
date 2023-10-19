#include "main.h"

/**
 * get_bit - Take the value of a bit at an index in a decimal number
 * @n: The number to search
 * @index: index of bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_value);
}
