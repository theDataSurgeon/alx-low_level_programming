#include"main.h"

/**
 * main - Mother function
 *
 * Description: uses _putchar in place of other
 * built in functions
 *
 * Return: Always 0 if Successful
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
