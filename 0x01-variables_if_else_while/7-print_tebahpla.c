#include <stdio.h>
/**
 * main- Program that prints alphabets in reverse
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
