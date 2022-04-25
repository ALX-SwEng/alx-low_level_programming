#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array character
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			++j;
		}
		putchar('\n');
	}
}
