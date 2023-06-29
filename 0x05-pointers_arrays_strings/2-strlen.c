#include "main.h"

/**
 * _sterlen - returns the length os a string
 * @s: strings
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
