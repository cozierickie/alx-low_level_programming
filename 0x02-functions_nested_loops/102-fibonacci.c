#include <stdio.h>

/**
 * print_fibonacci -Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int first = 1, second = 2, next, i;

	printf("%d, %d", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	print_fabonacci(50);

	return (0);
