/**
 * _isupper - check if c is upper
 *
 * @c: input to be processed
 *
 * Return: 1 if uppercase else  0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
