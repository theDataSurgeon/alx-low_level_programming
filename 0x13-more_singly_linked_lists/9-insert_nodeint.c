#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: Success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *node = NULL;
        listint_t *x = NULL;
        unsigned int i = 0;

        if (head == NULL)
                return (NULL);
        node = malloc(sizeof(listint_t));
        if (node ==  NULL)
                return (NULL);
        node->n = n;
        node->next = NULL;
        x = *head;
        if (x == NULL)
        {
                *head = node;
                node->next = NULL;
                return (node);
        }
        if (idx == 0)
        {
                node->next = *head;
                *head = node;
                return (node);
        }
        while (i != (idx - 1))
        {
                x = x->next;
                i++;
                if (x == NULL)
                {
                        free(node);
                        return (NULL);
                }
        }
        node->next = x->next;
        x->next = node;
        return (node);
}
