#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Output a-z in reverse
 *
 * Return: Always a 0 (Success)
*/

int main(void)
{
	char ch = 'z'; /*declaring and initializing*/

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
