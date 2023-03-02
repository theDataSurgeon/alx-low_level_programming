/**
 * string_toupper - changes from lowercase to uppercase
 *
 * @s: string entered
 *
 * Return: string to upper
 */
char *string_toupper(char *s)
{

	int y;
	y = 0;
	while (*(s + y)
	{
		if (*(s + y) >= 'a' && *(s + y) <= 'z')
			*(s + y) -= 'a' - 'A';
		y++;
	}

	return (s);
}
