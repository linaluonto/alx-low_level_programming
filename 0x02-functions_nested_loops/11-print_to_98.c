#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer n
 */

void print_to_98(int n)
{
	int a, b;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else if (n > 98)
	{
		for (b = n; b > 98; b--)
		{
			printf("%d, ", b);
		}
	}
	else if (n == 98)
		printf("%d\n", n);
}
