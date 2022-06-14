#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: Int 1
 * @b: Int 2
 * Return: Integers
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
