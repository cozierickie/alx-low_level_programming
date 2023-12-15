#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented
 * as a string to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: Returns the unsigned int with the decimal value
 * of the binary number, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
