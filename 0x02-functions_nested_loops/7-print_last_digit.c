#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer n
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int d;

	d = (n % 10);

	_putchar (d);
	return (d);
}
