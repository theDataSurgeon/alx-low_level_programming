#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that finds the factorial of *n
 *
 * @n: integer must be a positive number
 *
 * Return: factorial of the integer inputed
*/
int factorial(int n)
{
	if (n < 0)		/* checks if int < 0 and throws error */
		return (-1);
	else if (n == 0)	/* returns 0! */
		return (1);
	else			/* do if above code is satisfied 0*/
		return (n * factorial(n - 1));
}
