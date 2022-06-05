#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10, starting from zero
 * followrd by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 40; num < 50; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
