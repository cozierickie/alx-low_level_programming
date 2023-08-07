#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to change
 * to transform one number into another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int diff = n ^ m;

	for (i = 0; i < 64; i++)
	{
		if ((diff >> i) & 1)
			count++;
	}

	return (count);
}
