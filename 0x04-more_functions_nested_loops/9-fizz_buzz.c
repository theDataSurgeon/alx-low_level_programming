include"main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 5 print Buzz
 *       numbers that are multiples of 3 n 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		}
		else if (num % 3 && num % 5 == 0)
		{
			printf("FizzBuzz");
			prinf(" ");
			continue;
		}
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		if (num == 100)
			printf("\n");
	}

	return (0);
}
