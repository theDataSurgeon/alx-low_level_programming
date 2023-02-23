/**
 * _isdigit - using ASCII values, it checks if digit is  between 0 - 9
 *
 * @c: input to be processed
 *
 * Return: 1 if is digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
