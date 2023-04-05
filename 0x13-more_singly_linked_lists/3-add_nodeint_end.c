#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the
 *                    end of a listint_t list
 *
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 *
 * Return: Success result
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *i = NULL;
        listint_t *x = NULL;

        i = malloc(sizeof(listint_t));
        if (i == NULL)
                return (NULL);
        i->n = n;
        if (*head == NULL)
        {
                *head = i;
                i->next = NULL;
                return (*head);
        }

        y = *head;
        while (y->next != NULL)
        {
                y = y->next;
        }
        y->next = a;
        i->next = NULL;

        return (*head);
}
