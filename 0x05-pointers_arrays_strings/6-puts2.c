#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with first one.
 * @str: input
 * Return: print Characters
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
