#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if min > max, returns NULL.
 * if malloc fails, return NULL.
 */
void *array_range(int min, int max)
{
	int *ar;
	int n;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (n = 0; min <= max; n++, min++)
		ar[n] = min;

	return (ar);
}
