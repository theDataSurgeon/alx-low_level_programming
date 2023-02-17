#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
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
	putchar("\n");

	return (0);
}
