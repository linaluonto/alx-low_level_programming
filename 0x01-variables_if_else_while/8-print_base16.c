#include <stdio.h>
/**
 * main- Program to print hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar (n);
	for (n = 97; n <= 102; n++)
		putchar (n);
	putchar ('\n');
}
