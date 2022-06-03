#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %Id byte(s)\n", sizeof(charType));
	printf("Size of an int: %Id byte(s)\n", sizeof(intType));
	printf("Size of a long int: %Id byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %Id byte(s)\n", sizeof(floatType));
	return (0);
}
