#include"main.h"

/**
 * print_most_numbers - print 0 - 9 without
 *                      2 and 4 using the f
 *                      unction _putchar X2
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
