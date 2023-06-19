#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new libe
 * Return: Aways 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
