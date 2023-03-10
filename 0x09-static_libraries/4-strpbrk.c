/**
 * _strpbrk - a function that searches a
 *            string for any of a set of bytes.
 * 
 * @s: pointer to input string
 *
 * @accept: pointer to string we
 *         searching for in s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int x, a;
	
	x = 0;
	while (s[x] != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (s[x] == accept[a])
				return (s + x);
			a++;
		}
		x++;
	}
	return ('\0');
}
