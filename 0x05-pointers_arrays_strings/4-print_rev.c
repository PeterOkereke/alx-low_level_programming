#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * wcounter is to first count to end, n is to count back.
 * @s: string input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int wcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		wcounter++;
	}

	for (n = (wcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
