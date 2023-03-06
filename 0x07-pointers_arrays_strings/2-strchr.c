/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string 
 * @c: the character to locate from *s 
 *
 * Return: first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/**
	 * if c is '\0'or [NULL], we return
	 * the pointer to '\0'
	*/
	if (*s == c)
		return (s);
	/*else return null if not found*/
	return ('\0');
}
