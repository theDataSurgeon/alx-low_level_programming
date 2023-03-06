/*
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string that is an input
 *
 * @accept: this is the substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, j, f;
	a = 0;
	while (s[a] != '\0')
	{
		/**
		 * j and f are flags to
		 * check success
		 * if successful, return 0 from f
		 * else 1 from f
		 * */

		j = 0;
		f = 1;
		while (accept[j] != '\0')
		{
			if (s[a] == accept[j])
			{
				f = 0; /*if a success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		a++;
	}

	return (a);
}
