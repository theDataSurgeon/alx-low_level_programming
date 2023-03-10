/**
 * _strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @src: string input source
 *
 * @dest: destination of input string
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int ini, b = 0;

	for (ini = 0; src[ini] != '\0'; ++ini)
	{
		dest[b] = src[ini];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
