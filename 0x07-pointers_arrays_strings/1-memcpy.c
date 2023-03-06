/**
 * _memcpy - function that copies memory area
 *
 * @dest: this is where we will copy to
 * @src: this is what we are to copy
 * @n: n bytes of @src
 *
 * Return: 0 if program successful
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; ++x)
		dest[x] = src[x];
	return (dest);
}

