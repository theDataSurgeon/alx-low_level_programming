/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal
 *        negative integer if the stopping character
 *                in @s1 was less than the stopping
 *                character in @s2
 *        positive integer if the stopping character
 *                in @s1 was greater than the stopping
 *                character in @s2
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0, c;

	/**
	 * iterate through src and
	 * compare it with dest
	*/
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		*/
		if (s1[x] != s2[x])
		{
			/*
			 * return the difference between
			 * the two characters
			*/
			r = s1[x] - s2[x];
			break;
		}
		else
		{
			r = s1[x] - s2[x];
		}
		x++;
	}

	return (c);
}
