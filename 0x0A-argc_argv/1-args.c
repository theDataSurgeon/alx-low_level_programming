#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0 if successful
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0;
	int y;

	while (i < argc)
	{
		y = i;
		i++;
	}
	printf("%d\n", y);
	return (0);
}
