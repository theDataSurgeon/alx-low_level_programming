#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to be processed
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
		last_num *= -1;

	_putchar(last_num + '0');

	return (last_num);
}
