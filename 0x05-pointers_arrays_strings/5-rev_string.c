/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int length, i;
	char ch;

	/*find string length without null char at end*/
	for (length = 0; s[length] != '\0'; ++length)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[length - 1 - i]; /*-1 because the array starts from 0*/
		s[length - 1 - i] = ch;
	}

}
