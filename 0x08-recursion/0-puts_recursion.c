#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a new line
 *
 * @s: the string to be printed recursively
 *
 * Return: nothing since void function
*/

void _puts_recursion(char *s)
{
	/**
	 *  recurssion style only, no usage
	 *  of any of the built in
	 *  'loops'
	 */
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
