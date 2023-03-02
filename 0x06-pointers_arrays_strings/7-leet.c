/**
 * leet - encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: address of s
 */

char *leet(char *s)
{
	int x, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(s + x); x++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[x])
				s[x] = b[j];
		}
	}
	return (s);
}
