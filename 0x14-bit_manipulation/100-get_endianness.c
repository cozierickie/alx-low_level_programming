#include "main.h"

/**
 * get_endianness - Check if a machine is little or Large endian
 * Return: 0 for Large, 1 for little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
