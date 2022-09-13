#include "main.h"
/**
 * print_alphabet_x10- prints lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 0;

	while (n < 10)
	{
		for (ch = 'a'; 'a' <= 'z'; ch++)
		{
			_putchar(ch);
		}
		n++;
		_putchar('\n');
	}
}
