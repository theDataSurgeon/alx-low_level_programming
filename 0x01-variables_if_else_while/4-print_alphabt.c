#include<stdio.h>

/**
 * main - Function to handle all
 *
 * Description: Output all aplhabets  except q and e
 *
 * Return: Always 0 if without errors
*/

int main(void)
{
	char ch = 'a'; /*declaring and initializing*/

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
