#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of characters.
 */
char *argstostr(int ac, char **av)
{
	char *aptr;
	int a, b, d, ad;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (d = 0; av[b][d] != '\0'; d++)
			a++;
		a++;
	}

	aptr = malloc((a + 1) * sizeof(char));

	if (aptr == NULL)
	{
		free(aptr);
		return (NULL);
	}

	for (b = d = ad = 0; ad < a; d++, ad++)
	{
		if (av[b][d] == '\0')
		{
			aptr[ad] = '\n';
			b++;
			ad++;
			d = 0;
		}
		if (ad < a - 1)
			aptr[ad] = av[b][d];
	}
	aptr[ad] = '\0';

	return (aptr);
}
