#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int n, m;

	n = 0;
	while (n < 8)
	{
		m = 0;
		while (m < 8)
		{
			_putchar(a[n][m]);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
