#include <stdio.h>
/**
 * main- Program to print hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	int n;
	int ch;

	for (n = 48; n <= 57; n++)
		putchar (n);
	for (ch = 97; ch <= 102; ch++)
		putchar (ch);
	putchar ('\n');
	return (0);
}
