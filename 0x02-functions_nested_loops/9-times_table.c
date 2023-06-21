#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the 9 times table in a specific format.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10 && column != 0)
				_putchar(' ');

			if (product >= 10)
				_putchar(product / 10 + '0');

			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
