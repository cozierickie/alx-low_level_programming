#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number in which to check the bit.
 * @index: The index at which to check the bit.
 *
 * Return: Returns the value of the bit at the specified index,
 * or -1 if there is an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
