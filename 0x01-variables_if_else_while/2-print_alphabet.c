#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	while((letter = 'a') && (letter) <= 'z');
	{
		putchar(letter);
		putchar('\n');
		letter++;
	}
	return (0);
}
