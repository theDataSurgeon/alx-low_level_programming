/**
 * _strlen - function thatreturns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int count_me;

	for (count_me = 0; *s != '\0'; ++s)
		++count_me;

	return (count_me);
}
