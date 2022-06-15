#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: input to reverse
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int scounter = 0;
	int i;

	while (s[scounter] != '\0')
		scounter++;

	for (i = 0; i < scounter; i++)
	{
		scounter--;
		rev = s[i];
		s[i] = s[scounter];
		s[scounter] = rev;
	}
}
