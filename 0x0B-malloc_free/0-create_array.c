#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of 
 *                chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	
	/*NULL in parenthesis*/
	/*since return is a  function*/

	/**
	 * structure of malloc
	 * pointer = (castType*)malloc(size * sizeof(dataType))
	 * or
	 * pointer = malloc(size * sizeof(dataType)
	 * */

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
