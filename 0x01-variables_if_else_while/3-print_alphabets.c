#include <stdio.h>

/**
 * main - The Main Program
 *
 * Description: Output alphabets in lowercase then in uppercase
 *
 * Return: Always 0 if successful
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
