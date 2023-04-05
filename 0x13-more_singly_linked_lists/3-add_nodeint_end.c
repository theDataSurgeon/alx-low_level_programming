#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of a listint_t list
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: Success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *a = NULL;
        listint_t *x = NULL;

        a = malloc(sizeof(listint_t));
        if (a == NULL)
                return (NULL);
        a->n = n;
        if (*head == NULL)
        {
                *head = a;
                a->next = NULL;
                return (*head);
        }

        x = *head;
        while (x->next != NULL)
        {
                x = x->next;
        }
        x->next = a;
        a->next = NULL;

        return (*head);
}
