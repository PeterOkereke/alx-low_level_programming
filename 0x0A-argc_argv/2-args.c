#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array that contains program command line arguments
 * Return: 0 - Success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i]);
	i++;
	return (0);
}
