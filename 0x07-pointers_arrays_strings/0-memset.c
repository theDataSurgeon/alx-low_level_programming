/**
 * _memset - a function that fills
 *         memory with a constant byte
 *
 * @s: input pointer to char type
 *    represents the pointer to the
 *    block of memory to fill
 * @b: input variable of char type
 *    represents the character to
 *    fill s
 * @n: unsigned int variable
 *    the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 *         area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * we have to declare an unsigned int
	 * because we will be storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int x;

	for (x = 0; x < n; ++x)
		s[x] = b;

	return (s);
}
