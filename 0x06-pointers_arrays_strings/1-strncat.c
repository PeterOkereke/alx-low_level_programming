#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destination
 * @src: source
 * @n: print amount of bytes used from source
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
