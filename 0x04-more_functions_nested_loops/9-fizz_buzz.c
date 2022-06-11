#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints numbers from 1 to 100.
 * 3 multiples print Fizz instead of the number.
 * 5 multiples print Buzz instead of the number.
 * 3 & 5 multiples prints FizzBuzz instead
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("%s", b);
		else if (num % 3 == 0)
			printf("%s ", f);
		else if (num % 5 == 0)
			printf("%s ", b);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s ", fb);
		else
			printf("%d ", num);
	}
	printf('\n');
	return (0);
}
