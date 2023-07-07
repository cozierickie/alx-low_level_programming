#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv); /* Print the first argument (program name) */
	return (0);
}
