#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the
 *               number of elements in a
 *               linked listint_t list
 *
 * @h: listint_t type of node struct
 *
 * Return: Success
*/

size_t listint_len(const listint_t *h)
{
        unsigned int a;

        a = 0;
        while (h != NULL)
        {
                h = h->next;
                a++;
        }
        return (a);
}
