/**
 * _strncat - concatenates two strings to n size.
 *
 * @dest: pointer to destination
 *
 * @src: pointer to source
 *
 * @n: max size allowed 
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	
	/*not forgetting to null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
