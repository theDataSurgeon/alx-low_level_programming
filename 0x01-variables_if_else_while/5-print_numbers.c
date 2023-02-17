#include<stdio.h>

/**
 * main - Function to handle all functions
 *
 * Description: outpul all single digit numbers
 *
 * Return: always zero if successful
*/

int main(void)
{
	int digit = 0; /*declaring and initializing*/

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
