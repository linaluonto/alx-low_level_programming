#include "main.h"
/**
 * _isalpha- checks for alphabetic character
 * @c: integer c
 * Return: 1 if alphabetic, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
