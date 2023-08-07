#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specific index in
 * a decimal number
 * @n: The number to search
 * @index: The index of the bit
 *
 * Return: The value of the bit (0 or 1), or -1 if the index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
