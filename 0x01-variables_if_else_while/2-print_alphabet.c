#include <stdio.h>

/**
 * main - The main function
 *
 * Description: Output all aplhabet letters
 *
 * Return: Always 0 if successful
*/

int main(void)
{
	char ch = 'a'; /*declare and initialize*/

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
