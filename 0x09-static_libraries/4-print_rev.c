#include"main.h"

/**
 * print_rev - displays a string in reverse
 *
 * @s: string input parameter
 *
 * Return: nothing since void
*/

void print_rev(char *s)
{
	int index;

	/*finds length of string without \0 at the end*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print reverse string*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
