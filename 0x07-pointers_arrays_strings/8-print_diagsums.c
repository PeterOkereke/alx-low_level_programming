#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: input pointer
 * @size: size of the matrix
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < (size * size); n++)
	{
		if (n % (size + 1) == 0)
			sum1 += *(a + n);
		if (n % (size - 1) == 0 && n != 0 && n < size * size - 1)
			sum2 += *(a + n);
	}
	printf("%d, %d\n", sum1, sum2);
}
