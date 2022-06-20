#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: bytes filled
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
