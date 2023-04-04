#include "lists.h"

/**
 * print_listint - prints all elements in list
 * @h: the head of the list
 *
 * Return: num of nodes present
 */

size_t print_listint(const listint_t *h)
{
       unsigned int count_node = 0;
	
	while (h != NULL)

	{
		_putchar("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
