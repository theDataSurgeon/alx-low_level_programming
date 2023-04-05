#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @index: index of node to be returned
 * @head: pointer to head of node
 * Return: Success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *h;
        unsigned int ab;

        if (head == NULL)
                return (NULL);
        ab = 0;
        while (head != NULL)
        {
                if (index == ab)
                {
                        h = head;
                        return (h);
                }
                ab++;
                head = head->next;
        }
        return (NULL);
}
