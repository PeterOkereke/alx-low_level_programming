#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed to by src
 * @dest: destination of the string
 * @src: source of the string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *dt = dest;

	while (*src)
	{
	*dest++ = *src++;
	*dest = 0;
	}
	return (dt);
}
