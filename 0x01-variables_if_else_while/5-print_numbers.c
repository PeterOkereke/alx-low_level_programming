#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10, starting from zero
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		printf("%d\n", num);
	return (0);
}
