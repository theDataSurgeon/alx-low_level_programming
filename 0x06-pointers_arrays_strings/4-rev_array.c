/**
 * reverse_array - reverse array
 *
 * @a: content to be reversed
 *
 * @n: n is the number of elements of the array
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int x, y;
	for (x = 0; (x < (n - 1) / 2); x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
