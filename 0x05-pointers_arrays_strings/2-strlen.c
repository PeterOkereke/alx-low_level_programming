#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: char input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char sl = s[0];

	while (sl != '\0')
	{
		sum++;
		sl = s[i++];
	}
	return (sum);
}
