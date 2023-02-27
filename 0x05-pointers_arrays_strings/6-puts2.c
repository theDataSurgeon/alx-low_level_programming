#include"main.h"

/**
 * puts2 - prints every character of a string except
 *         NULL
 *
 * @str: string parameter to accept input
 *
 * Return: Noting Since Void
*/

void puts2(char *str)
{
	int index;

	/*the at even index, print else do nothing*/
	for (index = 0; str[index] != '\0'; i++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
