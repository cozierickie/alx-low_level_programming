#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number of times
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;

            if (j == 0)
                printf("%d", result);
            else
                printf(", %d", result);
        }
        printf("\n");
    }
}
