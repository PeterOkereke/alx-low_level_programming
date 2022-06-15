#include "main.h"

/**
 * _puts - A function that prints a string.
 * @str: String input
 * Return: a string
 */

void _puts(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

