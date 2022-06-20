#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: string
 * @c: character
 * Return: pointer to the first occurance of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int = i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
