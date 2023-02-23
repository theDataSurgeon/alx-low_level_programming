#include"main.h"

/**
 * print_diagonal - displays a diagonal line
 *
 * @n: is the number of times backwoad slash should be displayed
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
			_putchar(92); /*ASCII value of backward slash*/
			_putchar('\n');
		}
	}
}
