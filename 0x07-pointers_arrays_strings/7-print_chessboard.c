#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int tmp, m = 0;

	for (tmp = 0; tmp < 64; tmp++)
	{
		if (tmp % 8 == 0 && tmp != 0)
		{
			m = tmp;
			_putchar('\n');
		}
		_putchar(a[tmp / 8][tmp - m]);
	}
	_putchar('\n');
}
