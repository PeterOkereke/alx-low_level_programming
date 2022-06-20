#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Constant byte.
 * @n: bytes filled.
 * Return: pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;

	return (s);
}
