#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2-dimensional array.
 * @grid: multidimensional array of chars.
 * @height: height of the array.
 *
 * Return: nothing.
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits a string into words
 * @str: string
 *
 * Return: pointer of an array of integers.
 */
char **strtow(char *str)
{
	char **aptr;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aptr = malloc((height + 1) * sizeof(char *));
	if (aptr == NULL || height == 0)
	{
		free(aptr);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aptr[i] = malloc((c - a1 + 2) * sizeof(char));
				if (aptr[i] == NULL)
				{
					ch_free_grid(aptr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aptr[i][j] = str[a1];
		aptr[i][j] = '\0';
	}
	aptr[i] = NULL;
	return (aptr);
}
