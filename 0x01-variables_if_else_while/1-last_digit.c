#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to handle all
 *
 * Description: to check the last digit
 *
 * Return: returns 0 if program successful */

int main(void)
{
	int n,five;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	five = n % 5;/*check modulo*/
	if (five > 1)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, five);
	}
	
	else if (five == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, five);
	}

	else if (five == 6 && five != 0)
		printf("Last digit of %i is %i and 6 and not 0\n", n, five);


	return (0);
}
