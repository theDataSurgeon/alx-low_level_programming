#include"main.h"

/**
 * print_diagonal - display a diagonal line
 *
 * @n: is the number of times \ should be displayed
*/

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row-1; col++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' as a char*/
			_putchar('\n');
		}
	}
}
