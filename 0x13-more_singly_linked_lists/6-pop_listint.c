#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to head node
 * Return: Success
 */

int pop_listint(listint_t **head)
{
        listint_t *a = NULL;
        int i = 0;

        if (*head == NULL)
        {
                return (0);
        }
        a = *head;
        i = a->n;
        *head = a->next;
        free(a);
        return (i);
}
