#include <stdio.h>

/**
 * print_fibonacci -Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int i;

	unsigned long long int fib1 = 1, fib2 = 2, next;

	if (n >= 1)
		printf("%llu", fib1);
	if (n >= 2)
		printf(", %llu", fib2);

	for (i = 3; i <= n, i++)
	{
		next = fib1 + fib2;
		printf(", %llu", next);
		fib1 = fib2;
		fib2 = next;
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
	print_fibonacci(50);

	return (0);
}
