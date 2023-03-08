#include "main.h"

/**
 * check - checks for the square root
 * @a: first integer
 * @b: second integer
 *
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a); /* is successful */
	if (a * a > b)
		return (-1); /* is unseccessful */
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
