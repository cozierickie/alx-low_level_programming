#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int fib1 = 1, fib2 = 2, next_term, sum = 2;

	while (fib2 <= 4000000)
	{
		next_term = fib1 + fib2;

		if (next_term % 2 == 0)
			sum += next_term;

		fib1 = fib2;
		fib2 = next_term;
	}

	printf("%llu\n", sum);

	return (0);
}
