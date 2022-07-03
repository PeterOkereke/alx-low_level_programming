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
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
