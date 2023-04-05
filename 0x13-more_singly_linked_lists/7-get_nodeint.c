#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @index: index of node to be returned
 * @head: pointer to head of node
 * Return: Success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *x;
        unsigned int i;

        if (head == NULL)
                return (NULL);
        i = 0;
        while (head != NULL)
        {
                if (index == i)
                {
                        x = head;
                        return (x);
                }
                i++;
                head = head->next;
        }
        return (NULL);
}
