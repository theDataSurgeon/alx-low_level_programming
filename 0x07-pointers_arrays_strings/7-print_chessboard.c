#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing since void
 * 	   function
*/

void print_chessboard(char (*a)[8])
{
	int a, b;

	a = 0;
	b = 0;
	while (a < 64)
	{
		if (a % 8 == 0 && a != 0)
		{
			b = a;
			_putchar('\n');
		}

		_putchar(a[a / 8][a - b]);
		a++;
	}
	_putchar('\n');
}

