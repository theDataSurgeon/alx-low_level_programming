/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to the destnation
 *
 * @src: source input to be concat..
 *
 * Return: concat @src to @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	/*find the size of dest*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
