#include <stdio.h>
/**
 * main- program to print two digit combinations
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 48; n1 <= 56; n1++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (n1 != n2)
			{
				putchar (n1);
				putchar (n2);
				if (n1 != 56 || n2 != 57)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
