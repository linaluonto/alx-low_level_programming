#include "main.h"
/**
 * print_sign- prints the sign of a number
 * @n: integer n
 * Return: 1, 0 or -1 if greater than, equal to or less than zero respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
