#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: The number in which to set the bit.
 * @index: The index at which to set the bit.
 *
 * Return: Returns 1 if successful, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
