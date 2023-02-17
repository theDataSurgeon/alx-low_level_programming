#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - This fuction behind all functions
 *
 * Description: Output value of n's satus. That is if n is zero, positive or negative
 *
 * Return: Always return zero if successful
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*this is mmy code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
