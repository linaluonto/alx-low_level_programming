#include "main.h"
/**
 * _islower- checks for lowercase character
 * @c: integer c
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
