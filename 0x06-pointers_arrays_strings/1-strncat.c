/**
 * _strncat - concatenates two strings to n size.
 *
 * @dest: pointer to destination
 *
 * @src: pointer to source
 *
 * @n: max size allowed 
 *
 * Return: concat string
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, y;

	c = 0;

	/*find size of dest*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * unless if it has n or more than n*/

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[c + y] = src[y];
	
	/*not forgetting to null terminate dest*/
	dest[c + y] = '\0';

	return (dest);
}
