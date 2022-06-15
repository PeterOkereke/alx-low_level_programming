#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @src: Source
 * @dest: Destination
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) != '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
