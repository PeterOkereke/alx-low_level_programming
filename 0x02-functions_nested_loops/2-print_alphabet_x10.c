#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alpha;
	int n;

	n = 0;

	while (n < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		n++;
	}
}
