#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: stored char.
 *
 * Return: pointer of an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *ctr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ctr = malloc(sizeof(c) * size);

	if (ctr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ctr[n] = c;
	
	return (ctr);
}
