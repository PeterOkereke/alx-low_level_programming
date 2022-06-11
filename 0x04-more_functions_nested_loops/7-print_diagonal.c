#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: number of times, diagonal line should be printed.
 * Return: a diagonal line.
 */

void print_diagonal(int n)
{
	int di, li;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (di = 1; di <= n; di++)
		{
			for (li = 1; li < di; li++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
