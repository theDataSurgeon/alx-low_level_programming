#include <stdio.h>

/**
 * main - function to handle program
 *
 * Description: this program uses sizeof to print the size of various data types.
 *
 * Return: return zero if program successful
*/


int main(void)
{

	/* sizeof checks the size of a variable */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	pirntf("Size of long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of float: %lu bytes(s)\n", sizeof(float));

	return (0);

}
