#include "main.h"

/**
 * print_line - Print a line of n length.
 * @n: Length of the line.
 * Return: void
 */

void print_line(int n)
{
	int length = 0;

	while (length < n)
	{
		if (n > 0)
			_putchar('_');
		length++;
	}
	_putchar('\n');
}
