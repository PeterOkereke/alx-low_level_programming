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

	for (n = 0; n < 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
