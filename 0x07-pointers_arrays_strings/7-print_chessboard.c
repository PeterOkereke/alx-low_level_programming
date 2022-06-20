#include "main.h"

/**
 * print_chessboard - Ptints the chessboard
 * @a: input pointer
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int n, m = 0;

	for (n = 0; n < 64; n++)
	{
		if (n % 8 == 0 && n != 0)
		{
			m = n;
			_putchar('\n');
		}
		_putchar(a[n / 8][n - m]);
	}
	_putchar('\n');
}
