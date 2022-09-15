#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int v, h, k;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			k = v * h;

			if (v == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && v != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
