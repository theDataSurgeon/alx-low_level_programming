#include"main.h"

/**
 * print_square - display a square using the character #
 *
 * @size: is the size of the square
*/

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		putchar('\n');

	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
