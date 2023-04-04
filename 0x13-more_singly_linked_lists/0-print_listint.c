#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count_node = 1;

	/*return 0 as number of nodes if null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if the string is NULL, ouput/return the length as 0 and string as (nil)*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*move to the next node in list*/
		h = h->next;
		/*count nodes*/
		count_node += 1;
	}

	/*print for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (count_node);
}
