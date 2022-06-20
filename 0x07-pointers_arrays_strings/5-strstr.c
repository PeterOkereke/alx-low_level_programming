#include "main.h"

/**
 * _strstr - Finds the first occurance of the substring needle
 * in the string haystack.
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to beginning of located substring or 
 * NULL if substring not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *shaystack, *ssneedle;

	while (*haystack != '\0')
	{
		shaystack = haystack;
		ssneedle = needle;

		while (*haystack != '\0' && *ssneedle != '\0' && *haystack == *ssneedle)
		{
			haystack++;
			ssneedle++;
		}
		if (! *ssneedle)
			return (shaystack);
		haystack = shaystack + 1;
	}
	return (0);
}
