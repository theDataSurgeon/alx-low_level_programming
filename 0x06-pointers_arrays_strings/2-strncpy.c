/**
 * _strncpy - A method that cp a string.
 *
 * @dest: pointer output
 *
 * @src: pointer to input to be concat
 *
 * @n: byte size of src
 *
 * Return: dest as usual
*/

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	/**
	 * iterate through src
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
