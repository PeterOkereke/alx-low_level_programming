#include "main.h"

/**
 * _puts - A function that prints a string.
 * @str: String input
 * Return: a string
 */

void _puts(char *str)
{
	int s = 0;

	while (str != '\0')
	{
		s++;
		_putchar(str[s]);
	}
	_putchar('\n');
}
