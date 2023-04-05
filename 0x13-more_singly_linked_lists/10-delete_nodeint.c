#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of linked list
 * @head: pointer to head
 * @index: point of node deletion
 * Return: my success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *x = *head;
        listint_t *y;
        unsigned int yes =  0;

        if (head  == NULL || *head == NULL)
                return (-1);

        if (index == 0)
        {
                *head = x->next;
                free(x);
                return (1);
        }
        while (yes != (index - 1))
        {
                x = x->next;
                yes++;
                if (x == NULL)
                        return (-1);
        }
        y = x->next;
        x->next = y->next;
        free(x);
        return (1);
}
