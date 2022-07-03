#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: number of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status return value is 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
