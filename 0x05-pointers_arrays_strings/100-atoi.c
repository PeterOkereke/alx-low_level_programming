#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: string to convert to integer
 * Return: The integer.
 */
int _atoi(char *s)
{
	int i, n, m;

	i = n = m = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			m++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			while (*(s + i) >= '0' && *(s + i) <= '9')
			{
				if (n == 0)
				{
					n = (n * 10) + (*(s + i) - '0');
					n *= -1;
				}
				else
					n = (n * 10) - (*(s + i) - '0');
				i++;
			}
			if (m % 2 == 0)
				n *= -1;
			return (n);
		}
		i++;
	}
	return (0);
}
