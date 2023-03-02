/**
 * rot13 - encodes a string into rot13
 *
 * @s: the string to be encoded
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int x, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(s + x); x++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + x))
			{
				*(s + x) = b[j];
				break;
			}
		}
	}
	return (s);
}
